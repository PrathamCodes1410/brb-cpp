#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int product = 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if(num == 0){
                count++;
                num++;
            }
            product = product * num;
            sum = sum + num;
        }
        if(sum == 0){
            count++;
        }
        //cout << endl;
        //cout << "sum is : " << sum << endl;
        //cout << "product is : " << product << endl;
        cout << count << endl;
    }
}