#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int cost = 0;
    for (int i = 1; i <= w; i++)
    {
        cost = cost + (i * k);
    }
    if(cost >= n){
        int remaining = cost - n;
        cout << remaining << endl;
    }
    else{
        cout << 0 << endl;
    }
}