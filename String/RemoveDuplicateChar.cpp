#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string remove(string s){
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        cout << temp.find(s[i]) << endl;
        if(temp.find(s[i]) < 0 || temp.find(s[i]) >= s.length()){
            temp.push_back(s[i]);
            cout << temp << endl;
        }
        else{
            temp.erase(temp.find(s[i]), 1);
            temp.push_back(s[i]);
        }
    }
    
    return temp;
}

int main(){

    string s;
    cout << "Enter your string : ";
    getline(cin, s);

    cout << s << endl;

    string ans = remove(s);

    cout << "Final ans is : " << ans << endl;
}