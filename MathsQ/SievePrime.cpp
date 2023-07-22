// Sieve of Eratosthenes

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    
    int c = 0;
    vector<bool> v(n + 1, true);
    
    v[0] = v[1] = false;

    for (int i = 2; i < n; i++)
    {
        if(v[i] == true){
            int count = 0;
            int j = 1;

            while(j <= i/2){
                if(i % j == 0){
                    count++;
                }
                if(count <= 1){
                    cout << i << " is a prime number" << endl;
                    for (int j = i*2; j < n; j=j+i)
                    {
                        v[j] = false;
                    }
                    
                    c++;
                    break;
                }
                j++;
            }
        }
    }

    cout << c << endl;
    return c;


}


int main(){

    int num;
    cout << "Enter your number : ";
    cin >> num;

    countPrimes(num);
}