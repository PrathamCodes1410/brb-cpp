#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;

        string anna = "First";
        string katie = "Second";

        if(c % 2 == 0){
            if(a > b){
                cout << anna << endl;
            }
            else{
                cout << katie << endl;
            }
        }
        else{
            if(b >= a + 1){
                cout << katie << endl;
            }
            else{
                cout << anna << endl;
            }
        }
    }
}