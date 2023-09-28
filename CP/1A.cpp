#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    bool f = false;
    long long n, m, a;
    cin >> n >> m >> a;
    long long b;
    long long s;
    if(n > m){
        b = n;
        s = m;
    }
    else{
        b = m;
        s = n;
    }

    long long t1;

    if(b%a == 0){
        t1 = b / a;
    }
    else{
        t1 = (b + (a - b%a)) / a;
    }
    long long t2;
    if(a > s){
        cout << t1 << endl;
        f = true;
    }
    else{
        s = s - a;
        if(s%a == 0){
            t2 = s / a;
            t2++;
        }
        else{
            t2 = (s+ (a-s%a))/ a;
            t2++;
        }
    }
    if(f == false){
        //cout << t2 << endl;
        //cout << t1 << endl;
        cout << t2*t1 << endl;
    }
}