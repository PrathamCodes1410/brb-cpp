#include <iostream>
using namespace std;

long long fact(int num){

    if(num == 1){
        return 1;
    }

    return num * fact(num - 1);
}


int main(){

    int num;
    cout << "Enter your number : ";
    cin >> num;

    cout << "Your Factorial is : " << fact(num) << endl;

}