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
            cout << "Added : " << v[0] << " Sum is : " << sum << endl;
            currentWait = 0; 
            dupK = k;
        }
        else if(currentWait < n - 1){
            currentWait++;
            cout << "Wait is : " << currentWait << endl;
            sum = sum + v[currentWait];
            cout << "Added : " << v[currentWait] << " Sum is : " << sum << endl;
        }
        else{
            currentWait++;
            cout << "Empty" << endl;
        }
    }
    if(sum >= c){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        v.push_back(num);
    }

    ll mid;
    cin >> mid;
    sort(v.begin(), v.end(), greater<ll>());
    cout << check(n,c,d,v,mid) << endl;
}