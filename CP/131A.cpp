#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    bool no = false;
    //check if all words are uppercase
    for (int i = 1; i < s.length(); i++)
    {
        if(!(s[i] >= 'A' && s[i] <= 'Z')){
            no = true;
            break;
        }
    }
    if(no == true){
        cout << s << endl;
    }
    else{
        if(s[0] > 'Z'){
            // if first one is small convert it into capital
            s[0] = s[0] - 32;
        }
        else{
            s[0] = s[0] + 32;
        }
        for (int i = 1; i < s.length(); i++)
        {
            s[i] = s[i] + 32;
        }
    }
    if(no == false){
        cout << s << endl;
    }
}