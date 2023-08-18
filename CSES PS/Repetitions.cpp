#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int count = 1;
    int high = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i - 1] == s[i]){
            count++;
        }
        else{
            if(high < count){
                high = count;
            }
            count = 1;
        }
    }
    if(high < count){
        high = count;
    }
    cout << high << endl;
}