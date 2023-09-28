#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string st = "hello";
    string s;
    cin >> s;
    int j = 0;
    int count = 0;
    bool f = false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == st[j]){
            j++;
        }
        if(j >= st.size()){
            f = true;
            cout << "YES" << endl;
            break;
        }
    }
    if(j >= st.size() && f == false)
    {
        f = true;
        cout << "YES" << endl;
    }
    if(f == false){
        cout << "NO" << endl;
    }
}