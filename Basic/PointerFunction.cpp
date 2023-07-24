#include <iostream>
using namespace std;

void update(int * p){

    cout << "This is ptr : " << p << endl;
    cout << "Value pointing towards is : " << *p << endl;
    *p = *p + 1;
    cout << "After : " << *p << endl;
}



int main(){

    int num = 5;

    int * p = &num;

    cout << "Before : " << *p << endl;

    update(p);

    cout << "After : " << *p << endl;

}