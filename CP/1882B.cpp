#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int s;
        cin >> s;
        vector<set<int>> v;
        while(s--){
            set<int> s;
            int k = 51;
            while(k--){
                cout << "hre" << endl;
                int a;
                if(cin.get()){
                    cout << "broke" << endl;
                    break;
                }
                else if(cin >> a){
                    s.insert(a);
                }
            }
            cout << "this" << endl;
            v.push_back(s);
        }
        cout << endl;
        for(set<int> s : v){
            for(int i : s){
                cout << i << " ";
            }
        }
    }
}