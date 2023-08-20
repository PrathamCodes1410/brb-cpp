#include<iostream>
using namespace std;

int main(){

    int stations;
    cin >> stations;
    int total = 0;
    int high = 0;
    while(stations--){

        int pout, pin;
        cin >> pout >> pin;

        total = (total + pin) - pout;

        if(total > high){
            high = total;
        }
    }
    if(total > high){
        high = total;
    }
    cout << high << endl;

}