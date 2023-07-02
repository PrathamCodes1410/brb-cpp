#include <iostream>
using namespace std;


int pivot(int arr[], int num){
    int e = num;

        for(int i = 0; i < e; i++){
            int sum1 = 0;
            int sum2 = 0;
            for(int j = 0; j < i; j++){
                sum1 = sum1 + arr[j];
            }
            for(int k = i+1; k < e; k++){
                sum2 = sum2 + arr[k];
                cout << sum2 << endl;
            }
            cout<< "This is test sum1 : " << sum1 << endl;
            cout << "This is sum2 : " << sum2 << endl;
            if(sum1 == sum2){
                return i;
                break;
            }

        }

    return -1;
}


int main(){
    int num;
    cout << "Enter : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter : ";
        cin >> arr[i];
    }

    int out = pivot(arr, num);
    cout << "Result is : " << out << endl;
}