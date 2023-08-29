#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool check(ll n, ll c, ll d, vector<ll> v, ll k){

    ll dupK = k;
    ll currentWait = k;
    ll sum = 0;
    for (int i = 0; i < d; i++)
    {
        if(sum >= c){
            return true;
        }
        if(currentWait >= k){
            sum = sum + v[0];
            //cout << "Added : " << v[0] << " Sum is : " << sum << endl;
            currentWait = 0; 
            dupK = k;
        }
        else if(currentWait < n - 1){
            currentWait++;
            //cout << "Wait is : " << currentWait << endl;
            sum = sum + v[currentWait];
            //cout << "Added : " << v[currentWait] << " Sum is : " << sum << endl;
        }
        else{
            currentWait++;
            //cout << "Empty" << endl;
        }
    }
    if(sum >= c){
        return true;
    }
    else{
        return false;
    }
}




ll search(ll n, ll c, ll d,vector<ll> v, ll low = 0, ll high = -1){

    if(high == -1){
        high = d;
    }
    ll max = 0;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(check(n,c,d,v,mid)){
            if(mid > max){
                max = mid;
            }
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return max;
}

int main(){

    ll t;
    cin >> t;

    while(t--){

        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v;
        ll bsum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end(), greater<ll>());
        int big = 0;
        if(d > n){
            big = n;
        }
        else{
            big = d;
        }
        for (int i = 0; i < big; i++)
        {
            bsum = bsum + v[i];
        }
        //cout << "bsum is: " << bsum << endl;
        if(c <= bsum){
            cout << "Infinity" << endl;
            continue;
        }
        if(c > (v[0] * d)){
            cout << "Impossible" << endl;
            continue;
        }
        //cout << "Yeh kyu print hua" << endl;
        cout << search(n,c,d,v) << endl;
    }
}