#include <iostream>
using namespace std;

void sort(int arr[], int count){
    for (int i = 1; i < count; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0){

            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main(){
    int count;
    cout << "Enter the size of your array : ";
    cin >> count;

    int arr[20];

    for (int i = 0; i < count; i++)
    {
        cout << "Enter your number " << i + 1 << " : ";
        cin >> arr[i];
    }

    sort(arr, count);
}