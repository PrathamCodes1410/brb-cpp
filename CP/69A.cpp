#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        int one, two, three;
        cin >> one >> two >> three;

        sum1 = sum1 + one;
        sum2 = sum2 + two;
        sum3 = sum3 + three;
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}