#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int num;
        cin >> num;

        int divisor = 10;
        int multiplier = 10;
        if(num < divisor){
            cout << 1 << endl;
            cout << num << endl;
            continue;
        }
        vector<int> v;
        int count = 0;
        while(num != 0)
        {
            int digit = num % divisor;
            if(digit != 0){
                //cout << digit << endl;
                count++;
                v.push_back(digit);
            }
            num = num - digit;
            divisor = divisor * multiplier;
        }

        cout << count << endl;
        for(int i : v){
            cout << i << endl;
        }
    }
}