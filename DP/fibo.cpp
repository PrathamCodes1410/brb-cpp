#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int> &v, int &count){

    //cout << "running for n : " << n << endl;
    count++;
    if(n == 1 || n == 0){
        return n;
    }

    int ans;

    if(v[n] != -1){
        return v[n];
    }
    else{
        ans = fibo(n-1, v, count) + fibo(n-2, v, count);
        v[n] = ans;
    }

    return ans;

}

int SimpleFibo(int n, int &count){

    //cout << "running for n : " << n << endl;
    count++;
    if(n == 1 || n == 0){
        return n;
    }
    return SimpleFibo(n-1, count) + SimpleFibo(n-2, count);
}

int bottomUpFibo(int n){

    int count = 0;
    int prev = 0;
    int prev1 = 1;
    int current = 0;
    for(int i = 1; i < n; i++){
        count++;
        current = prev + prev1;
        prev = prev1;
        prev1 = current;
    }

    cout << "optimized steps were : " << count << endl;
    return current;
}

int main(){

    int n;
    cin >> n;
    int count = 0;
    vector<int> v(n+1, -1);

    cout << SimpleFibo(n, count) << endl;
    cout << "count for without DP : " << count << endl;
    count = 0;
    cout << fibo(n, v, count) << endl;
    cout << "count for with DP : " << count << endl;
    cout << bottomUpFibo(n) << endl;
}