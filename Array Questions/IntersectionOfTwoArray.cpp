#include <iostream>
using namespace std;

void inter(int one[], int two[], int n1, int n2){
    cout << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(one[i] == two[j]){
                cout << one[i] << " ";
            }
        }
        
    }

    cout << endl;
}




int main(){
    int num;
    cout << "Enter the length of your Array 1 : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Array 1 : Enter your number " << i + 1 << " : ";
        cin >> arr[i];
    }

    int sec;
    cout << "Enter the length of your second Array 2 : ";
    cin >> sec;

    int arrSec[25];

    for (int j = 0; j < sec; j++)
    {
        cout << "Array 2 : Enter your number " << j + 1 << " : ";
        cin >> arrSec[j];
    }

    inter(arr, arrSec, num, sec);
}
