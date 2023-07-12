#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int n){
    int count = 0;
    while(a <= n && b <= n){

        if(a > b){
            b += a;
        }
        else{
            a += b;
        }

        count++;
    }

    return count;
}



int main(){

    int t;
    cout << "Enter the number of test case : ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, n;
        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;
        cout << "Enter N : ";
        cin >> n;
        int ans = solve(a, b, n);
        cout << "The Final Answer is : " << ans << endl;
    }
}