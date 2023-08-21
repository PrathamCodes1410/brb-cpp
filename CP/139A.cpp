#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int p;
    cin >> p;

    vector<int> v;
    int sum = 0;
    for (int i = 1; i <= 7; i++)
    {
        int num;
        cin >> num;
        sum = sum + num;
        v.push_back(num);
    }
    if(sum == 0){
        v[6] = 1;
    }
    sum = 0;
    int d = -1;
    while(p > sum){
        d++;
        int day = d % 7;
        //cout << "day is : " << day << endl;
        sum = sum + v[day];
        //cout << "current sum is : " << sum << endl;
    }
    int ans = (d + 1) % 7;
    if(ans == 0){
        cout << 7 << endl;
    }
    else{
        cout << ans << endl;
    }
}