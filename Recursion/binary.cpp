#include <iostream>
using namespace std;

bool find(int arr[], int size, int num){

    int mid = size / 2;
    cout << "Current size is : " << size << endl;
    cout << "This mid is : " << mid << endl;
    cout << endl;

    if(mid == 0 && arr[mid] != num){
        return false;
    }

    if(arr[mid] > num){
        return find(arr, size - mid, num);
    }
    else if(arr[mid] < num){
        return find(arr + mid, size - mid, num);
    }
    else{
        return true;
    }

}


int main(){

    int count;
    cout << "Enter the size of the array : ";
    cin >> count;

    int *arr = new int[count];

    for (int i = 0; i < count; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number you want to find : ";
    cin >> num;


    cout << "Ans is : " << find(arr, count, num) << endl;
}