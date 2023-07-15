#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){

    cout << "reached here" << endl;
    vector<int> S_count(26, 0);
    vector<int> T_count(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a';
        cout << s[i] << "has index : " << index << endl;
        S_count[index]++;
    }

    cout << endl;
    cout << "Now for string T : " << endl;
    for (int i = 0; i < t.length(); i++)
    {
        int index = t[i] - 'a';
        cout << s[i] << "has index : " << index << endl;
        T_count[index]++;
    }

    if(S_count == T_count){
        return true;
        cout << "true" << endl;
    }
    

    return false;

}


int main(){

    string s;
    string t;

    cout << "Enter string s : ";
    getline(cin, s);
    cout << "Enter string t : ";
    getline(cin, t);

    cout << s << endl;
    cout << t << endl;

    bool ans = isAnagram(s, t);
    cout << "final ans is : " << ans << endl;

}

/*
242. Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
*/