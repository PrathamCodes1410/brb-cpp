#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void recon(vector<ll> &v, ll ans, ll n, ll sorted){
    ll i = sorted;
    ll firstout = 0;
    bool first = false;
    while(v[i] != firstout)
    {
        //cout << v[i] << endl;
        if(v[i] >= ans && v[i] != 1){
            if(first == false){
                firstout = v[i];
                first = true;
            }
            //cout << "removed and added " << v[i] << endl;
            ll chut = v[i];
            v.erase(v.begin()+i);
            //cout << "yeh add kiya hai : " << chut << endl;
            v.push_back(chut);
            i--;
        }
        i++;
    }
}


ll arbit(vector<ll>&v, ll n, ll &count, vector<ll> original, ll &sorted){

    for (int i = sorted; i < n - 1; i++)
    {
        if(v[i] != original[i]){
            //cout << "yeh : " << v[i] + 1 << endl;
            //cout << "aur : " << v[i + 1] << endl;
            count++;
            sorted = i;
            return v[i];
        }
    }
    return 0;
}

int main(){

    ll t;
    cin >> t;

    while(t--){

        ll n;
        cin >> n;
        ll sorted = 0;
        vector<ll> v;
        ll count = 0;
        for(ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }
        vector<ll> original = v;
        sort(original.begin(), original.end());
        ll ans = arbit(v,n,count, original, sorted);
        //cout << "First ans is : " << ans << endl;
        while(ans != 0){
            recon(v, ans, n, sorted);
            ans = arbit(v,n, count, original, sorted);
            //cout << "current ans is : " << ans << endl;
            //cout << "current count is : " << count << endl;
        }
        cout << count << endl;
    }
}