#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin >> t;

    while(t--){

        ll n, k;
        cin >> n >> k;
        ll s = 1;
        ll e = k;
        ll avoid = LLONG_MAX;
        if(n > k && k != 1 && n % k != 0){
            avoid = 1;
        }
        ll mid = (s+e) / 2;
        ll store = LLONG_MAX;
        while(s <= e){
            //cout << "here" << endl;
            if(n*mid >= k && mid != avoid){
                e = mid - 1;
                if(mid < store){
                    store = mid;
                    //cout << "store updated to : " << store << endl;
                }
            }
            else{
                s = mid + 1;
            }
            mid = (s+e)/2;
        }
        cout << store << endl;
    }


} 