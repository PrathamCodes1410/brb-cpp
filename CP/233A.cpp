#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    vector<int> v;
    if(n % 2 != 0){
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back(i + 1);
    }
    int i = 0;
    while(n > i)
    {
        swap(v[i], v[i + 1]);
        i = i + 2;
    }
    
    for(int i : v){
        cout << i << " ";
    }
}