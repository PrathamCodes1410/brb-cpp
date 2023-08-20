#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, n;
    cin >> n >> m;

    // a * a + b = n
    // b * b + a = m

    int a = 0;
    int b = 0;
    int smaller = 0;
    if(m > n){
        smaller = n;
    }
    else{
        smaller = m;
    }
    //int max = round(pow(smaller, 0.5)) + 1;
    //cout << "Max integer which can be squred is : " << max << endl;
    int max = smaller;

    int count = 0;
    int c = 0;
    while(a <= max){
        b = 0;
        while(b <= max){
            if((a*a) + b == n && (b*b) + a == m){
                c++;
                //cout << "This pair works : " << a << " " << b << endl;
            }
            b++;
        }
        a++;
    }

    cout << c << endl;
}