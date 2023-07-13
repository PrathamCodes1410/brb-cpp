#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[20];
    cout << "Enter your string : ";
    cin >> s;
    //s[2] = '\0';
    int i = 0;
    int count = 0;
    cout << "Current Name is : " << s << endl;
    while(s[i] != '\0')
    {
        cout << "Current Count is : " << count << endl;
        count++;
        i++;
    }
    
    cout << "Length of out character array is : "<< count << endl;
}