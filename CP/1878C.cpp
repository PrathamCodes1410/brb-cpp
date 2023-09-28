#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        long long n,k,x;
        cin >> n >> k >> x;

        long long max_sum = ((n*(n+1)) / 2);
        long long r = (n-k) + 1;
        long long w = n-k;
        long long stupiud = (w*(w+1)/2);
        long long min_sum = ((k*(k+1))/2);
        //cout << "this is max : " << max_sum << endl;
        //cout << "this is min : " << min_sum << endl;
        if(x >= min_sum && x <= (max_sum - stupiud)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}