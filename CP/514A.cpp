#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        int n = s[i] - '0';
        cout << "s[i] is : " << s[i] << endl;
        cout << "second step is : " << s[i] - '0' << endl;
        cout << "N is : " << n << endl;
        if(n == 9){
            continue;
        }
        else if(n > 4 && n < 9){
            n = 9 - n;
        }
        s[i] = n + '0';
        cout << "After s[i] is : " << s[i] << endl;
    }

    cout << s << endl;
    
}