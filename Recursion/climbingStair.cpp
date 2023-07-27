#include <iostream>
using namespace std;

int climb(int n){

    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }

    return climb(n - 1) + climb(n - 2);
}



int main(){

    int s;
    cout << "Enter the amount of stairs : ";
    cin >> s;

    cout << climb(s) << endl;

}