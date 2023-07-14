/*
151. Reverse Words in a String

https://leetcode.com/problems/reverse-words-in-a-string/description/

Caution : Have replaced Spaces with Underscore
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    int len = s.length();
    string result = "";
    string temp = "";
    for (int i = 0; i < len; i++)
    {
        if(s[i] != '_'){
            temp.push_back(s[i]);
        }
        else{
            if(temp != ""){
                if(result == ""){
                    result = temp + result;
                }
                else{
                    result = temp + "_" + result;
                }

                temp = "";
            }
        }
    }
    if(temp != ""){

        if(result == ""){
            result = temp + result;
        }
        else{
            result = temp + "_" + result;
        }
        temp = "";
    }

    
    return result;
}


int main(){
    string s;
    cout << "Enter your string : ";
    getline(cin, s);
    string ans = reverseWords(s);

    cout << "Final Result is : " << ans << endl;
}