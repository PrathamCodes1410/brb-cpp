#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i+1);
        }
        cout << "array is " << endl;
        for(int i : v){
            cout << i << endl;
        }
        for (int i = 1; i < n; i++)
        {
            int avg = (v[n] + v[n - i])/2;
            v.pop_back();
            v.pop_back();
            v.push_back(avg);
            cout << "array is " << endl;
            for(int i : v){
                cout << i << endl;
            }
        }
        
        cout << v[0] << endl;

    }

}