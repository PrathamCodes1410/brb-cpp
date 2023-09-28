#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int h1, m1, h2, m2;
    cin >> h1;
    char s;
    cin >> s;
    cin >> m1;

    cin >> h2;
    char s2;
    cin >> s2;
    cin >> m2;

    int h1m = h1 * 60;
    int h2m = h2 * 60;

    int d = ((h2m + m2) - (h1m + m1)) / 2;

    //cout << "In Minutes ans is : " << d << endl;

    int min = d % 60;
    int hours = (d-min) / 60;
    if(min >= (60 - m1)){
        hours++;
        min = ((m1+min) - 60);
        m1 = 0;
    }
    cout << setfill('0') << setw(2) << hours + h1;
    cout << ":";
    cout << setfill('0') << setw(2) << min + m1  << endl;
}