#include <iostream>
using namespace std;

void pivot(int arr[], int num){
    int s = 0;
    int e = num - 1;
    int mid;
    while(s < e){
        mid = (s + e)/2;

        if(arr[mid] >= arr[0]){
            s =  mid + 1;
        }
        else{
            e = mid;
        }
    }

    cout << s << endl;
}



int main(){
    int num;
    cout << "Enter the lenght of your array : ";
    cin >> num;
    
    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter : ";
        cin >> arr[i];
    }

    pivot(arr, num);
    
}