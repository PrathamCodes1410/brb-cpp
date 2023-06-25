#include <iostream>
using namespace std;


void rev(int arr[], int size){

    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }


    cout << "done" << endl;
}



int main(){
    int num;
    cout << "Enter Size of your Array : ";
    cin >> num;

    int arr[100];

    cout << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your No." << i + 1 << " : ";
        cin >> arr[i];
    }

    rev(arr, num);

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}