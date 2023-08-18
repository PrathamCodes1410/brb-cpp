#include<iostream>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = k * l;
    int slices = c * d;
    int salt = p;

    bool t = true;
    int count = 0;
    while(t){

        if(drinks >= n * nl && slices >= n && salt >= n * np){
            drinks = drinks - (n * nl);
            salt = salt - (n * np);
            slices = slices - n;
            count++;
        }
        else{
            t = false;
        }
    }
    cout << count << endl;
}