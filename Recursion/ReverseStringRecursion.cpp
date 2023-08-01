#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool reverse(string& s, int start = 0){

    int end = s.length() - start - 1;
    if(start > end){
        return true;
    }

    swap(s[start], s[end]);
    start++;
    cout << "Current s is : " << s << endl;
    return reverse(s, start);
}


int main(){

    string s;
    cout << "Enter your string : ";
    getline(cin, s);

    reverse(s);

    cout << s << endl;
}