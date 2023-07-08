#include <iostream>
using namespace std;

int fibo(int n){
    int firstNumber = 0;
    int secondNumber = 1;

    cout << firstNumber << " ";
    cout << secondNumber << " ";

    int thirdNumber;

    for(int i = 2; i < n; i++){
        thirdNumber = firstNumber + secondNumber;

        cout << thirdNumber << " ";

        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }

    return thirdNumber;

}



int main(){
    int num;
    cout << "Enter the N th term in the Fibonacci Sequence you want : ";
    cin >> num;
    cout << endl;
    int ans = fibo(num);
    cout << endl;
    cout << "The Nth Term is : " << ans << endl;
}