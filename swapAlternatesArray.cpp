#include <iostream>
using namespace std;

void altRev(int arr[], int Size){
    int start = 0;
    int end = Size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end - 2;
    }
}

void PrintArray(int arr[], int Size){
    for (int i = 0; i < Size; i++)
    {
        cout << arr[i] << " ";
    }
}



int main(){
    int num;
    cout << "Enter the length of your Array : ";
    cin >> num;

    int arr[100];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your No." << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << endl;
    PrintArray(arr, num);
    cout << "---->";
    altRev(arr, num);
    PrintArray(arr, num);
    cout << endl;
}