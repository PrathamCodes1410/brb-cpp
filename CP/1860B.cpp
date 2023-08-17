#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fancy(int m, int k, int a1, int ak, int minFancyUsed = INT_MAX){

    int LeftBurbles = m - (a1 + k * ak);
    
    int l = LeftBurbles % k;
    int max = l + (LeftBurbles / k);
    if(max < minFancyUsed){
        minFancyUsed = max;
        a1--;
        fancy(m,k,a1,ak, minFancyUsed);
    }
    return minFancyUsed;
}




int main(){

    int t;
    cin >> t;

    while(t--){

        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        if(a1 + ak * k >= m){
            cout << 0 << endl;
            continue;
        }
        if(a1 == 0 && ak == 0){
            int l = m % k;
            int max = l + (m / k);
            cout << max << endl;
            continue;
        }
        cout << fancy(m, k, a1, ak) - 1 << endl;
    }
}