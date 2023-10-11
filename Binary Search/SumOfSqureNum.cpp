#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c) {
    int s = 0;
    int e = sqrt(c) + 1;
    while(s <= e){
        cout << "Step " << s << " " << e << endl;
        if(s*s + e*e == c){
            return true;
        }
        else if(s*s + e*e > c){
            e--;
        }
        else if(s*s + e*e < c){
            s++;
        }
    }
    return false;
}


int main(){

    int n;
    cin >> n;
    cout << "Ans is : " << judgeSquareSum(n) << endl;
}