#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    
    int n = matrix.size();
    
    vector<int> v;
    vector<vector<int>> m;

    int i = 0;

    while(i < n){
        cout << i << endl;
        for(int j = 0; j < n; j++){
            v.push_back(matrix[(n-1) - j][i]);
            cout << matrix[(n-1) - j][i] << " ";
        }
        m.push_back(v);
        v.clear();
        i++;
    }
    matrix = m;
}

int main(){

    int n;
    cin >> n;
    vector<int> v;
    vector<vector<int>> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        m.push_back(v);
        v.clear();
    }

    rotate(m);

    cout << "Ans is : " << endl;

    for(auto i : m){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}