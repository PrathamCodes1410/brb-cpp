#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// SIMPLE APPROACH
int countStairs(int n){

    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }

    return countStairs(n-1) + countStairs(n-2);
}


//MEMOIZATION APPROACH DP ARRAY
int memoStairs(int n, vector<int> &v){

    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    int ans = 0;
    if(v[n] != -1){
        return v[n];
    }
    else{
        ans = memoStairs(n - 1, v) + memoStairs(n-2, v);
        v[n] = ans;
    }

    return ans;
}

int tabStairs(int n, vector<int> &v){

    v[0] = 0;
    v[1] = 1;

    for(int i = 1; i < n; i++){
        v[i] = v[i-1] + v[i-2];
    }

    return v[n];
}


//BOTTOM-UP APPROACH : TABULATION


int main(){

    int n;
    cin >> n;
    vector<int> v(n+1, -1);
    cout << "simple approach : " << countStairs(n) << endl;
    cout << "top down - memoization : " << memoStairs(n, v);
    v.clear();
    cout << "bottom up - tabulation : " << tabStairs(n, v);
}