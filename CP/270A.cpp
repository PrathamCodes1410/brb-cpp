#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    float t;
    cin >> t;

    while(t--){

        float n;
        cin >> n;
        bool found = false;
        if(n < 60 || n >= 180){
            cout << "NO" << endl;
            continue;
        }
        else{
            for (float i = 3; i < 1000; i++)
            {   
                if(((i-2) * 180)/i == n){
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            if(found == false){
                cout << "NO" << endl;
            }
        }
    }
}