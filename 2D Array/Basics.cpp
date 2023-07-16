#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Create 2D array
    int arr[3][4];
    int arrr[3][4] = {1,2,3,4,5,6,7,8,9,10,11};
    int arrrr[3][4] = {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}};

    // insert values into arr intialised array
    // row wise wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter your num : ";
            cin >> arr[i][j];
        }

    }

    //printing values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        
        cout << endl;
    }
}