#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> simpleSieve(ll limit)
{
    vector<ll> m;
    // Create a boolean array "mark[0..limit-1]" and
    // initialize all entries of it as true. A value
    // in mark[p] will finally be false if 'p' is Not
    // a prime, else true.
    bool mark[limit];
    for(int i = 0; i<limit; i++) {
      mark[i] = true;
    }
   
    // One by one traverse all numbers so that their
    // multiples can be marked as composite.
    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }
   
    // Print all prime numbers and store them in prime
    for (int p=2; p<limit; p++)
        if (mark[p] == true)
            m.push_back(p);
}

int main(){

    ll t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        ll num = stoi(s);
        vector<ll> m = simpleSieve(num + 1);
        //cout << endl;
        
        bool found = false;
        sort(m.begin(), m.end());
        for(ll i = m.size() - 1; i != 0; i--){
            string search = to_string(m[i]);
            //cout << "currently searching : " << search << endl;
            ll c = 0;
            ll ck = 0;
            bool till = true;
            ll j = 0;
            cout << "hre" << endl;
            while(j < search.size())
            {
                //cout << search[j] << " " << endl;
                for(ll k = ck; k < s.size(); k++){
                    if(s[k] == search[j]){
                        //cout << "Matched : " << s[k] << " and " << search[j] << endl;
                        c++;
                        ck = k + 1;
                        break;
                    }
                }
                //cout << "here" << endl;
                j++;
            }
            if(c >= search.size()){
                cout << search << endl;
                cout << s.size() - search.size() << endl;
                found = true;
                break;
            }
            //cout << endl;
        }
        if(found == false){
            cout << -1 << endl;
        }
    }


}