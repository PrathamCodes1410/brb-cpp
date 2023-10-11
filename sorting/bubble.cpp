#include <iostream>
using namespace std;

void sort(int arr[], int count){
    int found = false;
    while(found == false){
        found =  true;
        for (int i = 0; i < count-1; i++)
        {
            if(arr[i + 1] < arr[i]){
                int temp = arr[i];
                swap(arr[i], arr[i + 1]);
                swap(arr[i + 1], temp);
                found = false;
            }
        }
    }
    cout << "Sorting the Array..." << endl;
    cout << "Here is the result :"<< endl;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
}



int main(){
    int count;
    cout << "Enter the array size : ";
    cin >> count;
    int arr[25];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the no." << i + 1 << " : ";
        cin >> arr[i];
    }
    sort(arr, count);
}