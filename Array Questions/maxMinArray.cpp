#include <iostream>
using namespace std;

//It is because the sizeof() operator returns the size of a type in bytes
// an int type is usually 4 bytes

int max(int arr[], int SizeofArray) {
    //int SizeOfArray = sizeof(arr);

    //cout << "Test Real Size : " << SizeOfArray << endl;

    int CurrentBiggestNumber = INT32_MIN;

    for (int i = 0; i < SizeofArray; i++)
    {
        //cout << arr[i] << endl;
        if(arr[i] > CurrentBiggestNumber){
            CurrentBiggestNumber = arr[i];
        }
    }

    cout << "Biggest Number in the given Array is : " << CurrentBiggestNumber << endl;

    return CurrentBiggestNumber;
    
}

void min(int arr[], int SizeOfArray){

    int CurrentMin = INT32_MAX;

    for (int i = 0; i < SizeOfArray; i++)
    {
        if(arr[i] < CurrentMin){
            CurrentMin = arr[i];
        }
    }
    
    cout << "Smallest Number in the given Array is : " << CurrentMin << endl;
}




int main() {
    //int arr[7] = {10,12,45,15,89,78,65};

    //int* secArr = get();

    int num;
    cout << "Enter the number of Number you want in the array : ";
    cin >> num;

    cout << endl;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        int temp;
        cout << "Enter the number " << i + 1 << " : ";
        cin >> temp;

        cout << endl;

        arr[i] = temp;
    }


    max(arr, num);
    min(arr, num);
} 