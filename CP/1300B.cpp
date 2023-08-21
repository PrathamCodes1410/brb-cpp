#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < 2*n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        int dif = abs(v[n] - v[n - 1]);
        cout << dif << endl;
    }
}