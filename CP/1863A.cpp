#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin >> t;

    while(t--){

        ll n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        if(n == a){
            cout << "YES" << endl;
            //cout << "first" << endl;
            continue;
        }
        bool found = false;
        ll count = 0;
        ll numX = 0;
        for (int i = 0; i < q; i++)
        {
            if(s[i] == '+'){
                count++;
                numX++;
            }
            else{
                if(count + a >= n){
                    cout << "YES" << endl;
                    //cout << "idhar yes hua" << count + a << endl;
                    found = true;
                    break;
                }
                count--;
            }
        }
        if(found == true){
            continue;
        }
        if(count + a >= n){
            //cout << "yes hogaya " << count + a << endl;
            cout << "YES" << endl;
        }
        else if(numX + a >= n){
            //cout << "yeh kya hai " << numX + a << endl;
            cout << "MAYBE" << endl;
        }
        else{
            //cout << "no hogaya " << endl;
            cout << "NO" << endl;
        }
    }
}