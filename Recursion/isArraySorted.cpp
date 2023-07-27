#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){

    //cout << "Current Size is : " << size << endl;
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] < arr[1]){
        return isSorted(arr+1, size-1);
    }
    else{
        return false;
    }
}


int main(){

    int size;
    cout << "Enter the size of your array : ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter your number " << i + 1 << " : ";
        cin >> arr[i];
    }
    
    cout << "bool is : " << isSorted(arr, size);

    // deleting the memory from the heap
    delete []arr;
}