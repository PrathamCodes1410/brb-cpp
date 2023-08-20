#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + (n - i) + i*(n-i-1);
        //cout << "all pressed : " << n - i << endl;
        //cout << "previously pressed : " << i * (n-i-1) << endl;
        //cout << "current total is : " << total << endl;
    }
    
    cout << total << endl;
}