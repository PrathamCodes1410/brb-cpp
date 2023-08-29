#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll add(ll a){
    ll sum = (a * (a - 1))/2;
    return sum;
}


int main(){

    ll n, m;
    cin >> n >> m;
    if(m == n){
        cout << 0 << endl;
        cout << 0 << endl;
    }
    else if(m == 1){
        ll ans = add(n);
        cout << ans << endl;
        cout << ans << endl;
    }
    else
    {
        // for minimum
        ll leftPlayerToChoose = n % m; // who gets an extra player
        ll TeamsWithHandicap = m - (n%m); // who doesnt get a extra player

        cout << leftPlayerToChoose * add((n/m) + 1) + TeamsWithHandicap * add(n/m) << endl;

        // for maximum
        ll max = n - (m - 1);
        cout << add(max) << endl;
    }
}