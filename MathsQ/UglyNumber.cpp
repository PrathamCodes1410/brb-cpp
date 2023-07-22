// Number should be a prime factor of 2,3,5 only to be dirty...
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n){

    if(n <= 0){
        return false;
    }
    
    while(n != 1){


        //cout << n % 2 << endl;
        //cout << n % 3 << endl;
        //cout << n % 5 << endl;

        if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0){
            cout << "reached here!" << endl;
            return false;
        }
        else{

            if(n % 2 == 0){
                n = n/2;
            }
            else if(n % 3 == 0){
                n = n/3;
            }
            else{
                n = n / 5;
            }
        }

    }

    return true;

}


int main(){

    int num;
    cout << "Enter your number : ";
    cin >> num;

    bool ans = isUgly(num);

    cout << "The final ans is : " << ans << endl;

}