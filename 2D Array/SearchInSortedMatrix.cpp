#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>& matrix, int target){

    for (int i = 0; i < matrix.size(); i++)
    {   
        cout << "Current Row Limit is : " << matrix[i][matrix[i].size() - 1] << endl;
        if(matrix[i][matrix[i].size() - 1] >= target){
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        else{
            return false;
        }
        cout << endl;
    }
}


int main(){

    vector<vector<int>> v;
    int row;
    int col;
    cout << "Enter the number of rows in your matrix : ";
    cin >> row;
    cout << "Enter the number of col in your matrix : ";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> v1;
        for (int j = 0; j < col; j++)
        {
            int num;
            cout << "Enter your num : ";
            cin >> num;
            v1.push_back(num);
        }
        v.push_back(v1);
    }
    
    for(vector<int> v1 : v){
        for(int i : v1){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter your target number : ";
    int num;
    cin >> num;

    bool ans = search(v, num);

    cout << "Final Ans is : " << ans << endl;
}