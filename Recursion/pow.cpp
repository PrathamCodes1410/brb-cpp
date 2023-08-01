#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int num, int power, int ans = 1){

    cout << "This is the power : " << power << endl;
    if(power < 0){
        power = 1 / power;
    }
    if(power == 0){
        return 1;
    }
    if(power == 1 || power == -1){
        return num;
    }
    
    if(power % 2 == 0){

        cout << "was here 2" << endl;
        power = power / 2;
        return pow(num, power) * pow(num, power);

    }
    else{
        cout << "Hey!" << endl;
        power = power / 2;
        return num * pow(num, power) * pow(num, power);
    }
    

}


int main(){

    int main;
    cout << "Enter the main number : ";
    cin >> main;

    int power;
    cout << "to the power of : ";
    cin >> power;
    double ans = pow(main, power);
    cout << "Ans is : " << ans << endl;
}