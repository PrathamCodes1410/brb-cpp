#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long count;
    cin >> count;

    vector<long long> v;

    for (long long i = 0; i < count; i++)
    {
        long long num;
        cin >> num;

        v.push_back(num);
    }
    long long total = 0;
    for (long long i = 1; i < count; i++)
    {
        if(v[i] < v[i - 1]){
            long long dif = v[i - 1] - v[i];
            v[i] = v[i - 1];
            total = total + dif;
        }
    }
    cout << total << endl;
}