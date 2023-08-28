#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int rn = (i * 2) + 1;
        bool reached = false;
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        
        for (int j = 0; j < rn; j++)
        {
            if(j >= i){
                reached = true;
            }
            if(reached == true){
                int k = rn - j - 1;
                if(j == rn - 1){
                    cout << k;
                }
                else{
                    cout << k << " ";
                }
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int rn = (i * 2) + 1;
        bool reached = false;
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < rn; j++)
        {
            if(j >= i){
                reached = true;
            }
            if(reached == true){
                int k = rn - j - 1;
                if(j == rn - 1){
                    cout << k;
                }
                else{
                    cout << k << " ";
                }
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }
}