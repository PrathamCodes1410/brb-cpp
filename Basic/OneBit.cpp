#include <iostream>
using namespace std;

int convertNumberToBit(int num){
    int temp = num;
    int rem, arr[64];
    int i = 0;

    while(temp != 0){
        rem = temp % 2;
        temp = temp / 2;
        arr[i] = rem;
        cout << arr[i];
        i++;

        cout << "This is current rem : " << rem << endl;
        cout << "This is current temp : " << temp << endl;
    }

    int total = 0;

    cout << "This is current I :: " << i << endl;

    while(i != 0){
        cout << arr[i - 1];

        i = i - 1;

        if(arr[i] == 1){
            total++;
        }
    }
    cout << endl;

    cout << "This is the total :: " << total << endl;

    return total;

}





int main(){
    int n;
    cout << "Enter your number ";
    cin >> n;
    //running the function 

    convertNumberToBit(n);

    cout << "Done" << endl;
}