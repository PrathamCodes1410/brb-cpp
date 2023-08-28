#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long newpow(long long n, long long p) {
    if(p == 0){
        return 1;
    }
    if(p == 1){
        return n;
    }
    if(p % 2 == 0){
        return newpow(n, p/2) * newpow(n, p/2);
    }
    else{
        return newpow(n, p/2) * newpow(n, p/2) * n;
    }
}


int main(){
    long long n, p;
    cin >> n >> p;
    cout << newpow(n, p) << endl;
    //converting power into binary form
}