#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, m;
        cin >> n >> m;

        if(n*m % 2 == 0){
            cout << (n*m) / 2;
        }
        else{
            cout << 1 + (n*m) / 2 << endl;
        }
    }
}