#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;
    string st;
    for (int i = 0; i < s.length(); i++)
    {
        char c = (char)tolower(s[i]);
        st.push_back(c);
    }
    s.clear();

    sort(st.begin(), st.end());

    char previous = '1';
    int count = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if(previous != st[i]){
            count++;
            previous = st[i];
        }
    }
    if(count == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}