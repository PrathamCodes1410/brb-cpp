/*
557. Reverse Words in a String III

Given a string s, reverse the order of characters in each word within 
a sentence while still preserving whitespace and initial word order.


*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverse(string s){

    string result = "";
    string temp = "";
    int len = s.length();

    for (int i = len - 1; i >= 0; i--)
    {
        if(s[i] != '_'){
            temp.push_back(s[i]);
        }
        else{
            cout << endl;
            cout << temp << endl;
            if(result == ""){
                result = temp + result;
            }
            else{
                result = temp + "_" + result;
            }
            temp = "";
        }
    }
    cout << endl;
    cout << temp << endl;
    result = temp + "_" + result;
    cout << endl;
    
    return result;
}



int main(){

    string s;
    cout << "Enter your string : ";
    getline(cin, s);

    string ans = reverse(s);
    cout << "Reversed String is : " << ans << endl;
}