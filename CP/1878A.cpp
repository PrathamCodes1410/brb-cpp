#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int num, k;
        cin >> num >> k;
        bool b = 0;
        int a = 0;
        int c = 0;
        while(num--)
        {
            int num;
            cin >> num;
            if(num == k){
                if(a < 1){
                    c = 0;
                    a++;
                }
                a++;
            }
            c++;
            if(a > (c/2))
                b = 1;
        
        }
        if(b == 0){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    
    }
}