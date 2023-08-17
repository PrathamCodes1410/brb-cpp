#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        string s;
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '('){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        vector<int> a;
        for (int i = 0; i < s.length() * 2; i++)
        {
            a.push_back(1);
            a.push_back(0);
        }
        cout << s << endl;
    }
}