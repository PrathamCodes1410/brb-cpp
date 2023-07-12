#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void sort(string s){
    cout << s << endl;
    cout << s.length() << endl;
    string another;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '+'){
            cout << "This is a number ig : " << another << endl;
            another = "";
        }
        else{
            another = another + s[i];
        }
    }
    cout << "Last number in string is : " << another << endl;
    another = "";
    
}


int main(){
    int t;
    cout << "Enter your test cases : ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cout << "Enter your string : ";
        cin >> s;

        sort(s);
    }
}