#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int d = n % 10;
    n = n - d;
    d = 9 - d;
    n = n + d;

    
    cout << n << endl;

}