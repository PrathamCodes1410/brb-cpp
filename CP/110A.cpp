#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;
    bool found =  false;
    bool four =  false;
    bool seven = false;
    int count = 0;
    while(n != 0){
        int digit = n % 10;
        if(digit != 4 && digit != 7){
            found = true;
        }
        else{
            //cout << "current number is : " << n << endl;
            //cout << "current lucky digit is : " << digit << endl;
            if(digit == 4){
                four = true;
            }
            if(digit == 7){
                seven = true;
            }
            count++;
        }
        n = n / 10;
    }
    //cout << "Number of lucky number are : " << count << endl;
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}