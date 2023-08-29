#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin >> t;

    while(t--){

        ll a, b;
        cin >> a >> b;
        ll small;
        ll big;
        if(a > b){
            small = b;
            big = a;
        }
        else{
            small = a;
            big = b;
        }

        if(big > small * 2){
            cout << big*big << endl;
        }
        else{
            cout << (small * 2) * (small * 2) << endl;
        }
    }
}