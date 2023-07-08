#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    int arr[25];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + count);
    

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }

    cout << (arr[count - 1] - arr[0]) << endl;
    
}