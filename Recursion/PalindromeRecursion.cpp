#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(string &s, int start, int end){

    if(start >= end){
        return true;
    }
    if(s[start] == s[end]){
        start++;
        end--;
        return check(s, start, end);
    }
    else {
        return false;
    }
}



int main(){

    string s;
    cout << "Enter your string : ";
    getline(cin, s);


    cout << check(s, 0, s.length() - 1) << endl;

}