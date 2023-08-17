#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    vector<vector<int>> m;
    int p, q;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;
            if(num == 1){
                p = i;
                q = j;
            }
            v.push_back(num);
        }
        m.push_back(v);
        v.clear();
    }
    
    if(p > 2){
        p = p - 2;
    }
    else{
        p = 2 - p;
    }

    if(q > 2){
        q = q - 2;
    }
    else{
        q = 2 - q;
    }

    cout << p + q << endl;
}