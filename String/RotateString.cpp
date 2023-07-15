#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal){

    if(s.length() != goal.length())
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int j = 0;
        char temp = s[j];
        s.erase(s.begin());
        s.push_back(temp);

        cout << s << endl;

        if(s == goal){
            return true;
        }
    }
    
    return false;
}


int main(){

    string s;
    string goal;
    cout << "Enter the main string : ";
    getline(cin, s);
    cout << "Enter the main string : ";
    getline(cin, goal);

    bool ans = rotateString(s, goal);
    cout << "Final ans is : " << ans << endl;
}