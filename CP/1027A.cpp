#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        int p1 = 0;
        int p2 = n - 1;
        bool found = true;
        while(p2 > p1){

            int bp1 = s[p1] - 1;
            int ap1 = s[p1] + 1;

            int bp2 = s[p2] - 1;
            int ap2 = s[p2] + 1;

            //cout << ap1 << endl;
            //cout << bp1 << endl;
            //cout << ap2 << endl;
            //cout << bp2 << endl;
            if(ap1 == ap2 || bp1 == bp2 || ap1 == bp2 || bp1 == ap2){
                //cout << "same" << endl;
                p1++;
                p2--;
            }
            else{
                cout << "NO" << endl;
                found = false;
                break;
            }
        }
        if(found == true){
            cout << "YES" << endl;
        }
    }
}