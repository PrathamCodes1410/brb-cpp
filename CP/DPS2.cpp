#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        if(n == 1){
            int c;
            cin >> c;
            cout << "YES" << endl;
            continue;
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        bool f = false;
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i] + 1 != v[i + 1] && v[i] != v[i + 1]){
                cout << "NO" << endl;
                f = true;
                break;
            }
        }
        if(f == false){
            cout << "YES" << endl;
        }
    }
}