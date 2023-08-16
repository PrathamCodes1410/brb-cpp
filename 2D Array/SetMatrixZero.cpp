#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>>& matrix){

    vector<vector<int>> dup = matrix;

    cout << "before : " << endl;
    for(auto i : dup){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix[i][j] == 0){
                for (int k = 0; k < matrix[i].size(); k++)
                {
                    dup[i][k] = 0;
                }
                for (int k = 0; k < matrix.size(); k++)
                {
                    dup[k][j] = 0;
                }
            }
        }
    }

    cout << "After : " << endl;
    for(auto i : dup){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    matrix = dup;
}



int main(){

    int l, b;
    cout << "Enter the length of the matrix : ";
    cin >> l;

    cout << "Enter the bredth of the matrix : ";
    cin >> b;

    vector<vector<int>> m;
    vector<int> v;

    for (int i = 0; i < b; i++)
    {
        for (int i = 0; i < l; i++)
        {
            int num;
            cout << "Enter num : ";
            cin >> num;
            v.push_back(num);
        }
        cout << endl;
        m.push_back(v);
        v.clear();
    }
    setZeros(m);
}