#include <iostream>
#include <math.h>
using namespace std;

bool isPalindrome(int x){

    if(x < 0){
        return false;
    }
    int temp = x;
    int total = 0;
    while(temp != 0){

        int digit = temp % 10;
        temp = temp / 10;
        total = total*10 + digit;
    }

    if(x == total){
        return true;
    }

    return false;

}

int main(){

    int x;
    cout << "Enter your number : ";
    cin >> x;

    bool ans = isPalindrome(x);

    cout << "Final ans is : " << ans << endl;
}