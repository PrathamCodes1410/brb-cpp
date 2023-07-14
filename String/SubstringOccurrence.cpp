#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part){

    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}


int main(){

    string s;
    string part;

    cout << "Enter your main string : ";
    getline(cin, s);
    cout << "Enter your substring : ";
    getline(cin, part);

    string ans = removeOccurrences(s, part);

    cout << "Final Ans is : " << ans << endl;

}