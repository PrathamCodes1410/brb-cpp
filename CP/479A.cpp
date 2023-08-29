#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<long long> v;
    for (long long i = 0; i < 3; i++)
    {
        long long num;
        cin >> num;
        v.push_back(num);
    }
    long long large = 0;

    for (long long i = 0; i < 5; i++)
    {
        long long sum = 0;
        if(i == 0){
            sum = v[0] * v[1] * v[2];
        }
        else if(i == 1){
            sum = v[0] + (v[1] * v[2]);
        }
        else if(i == 2){
            sum = (v[0] + v[1]) * v[2];
        }
        else if(i == 3){
            sum = v[0] + v[1] + v[2];
        }
        else if(i == 4){
            sum = v[0] * (v[1] + v[2]);
        }

        if(sum > large){
            large = sum;
        }
    }
    cout << large << endl;
}