#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){

        int x, y, n;
        cin >> x >> y >> n;

        vector<int> a;
        a.push_back(x);
        int low = x;
        bool found = false;
        if(n > (y - x)){
            cout << -1 << endl;
            found = true;
        }

        for (int i = 0; i < n - 2; i++)
        {
            float mid = (low + y) / 2;
            int m = round(mid);
            a.push_back(m + 1);
            low = m + 1;
        }

        if(found == false){
            a.push_back(y);
            for(int i : a){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}