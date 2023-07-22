#include <iostream>
using namespace std;


int main(){

    int num = 5;

    cout << "The address of num 5 is : " << &num << endl;

    int *p = &num;

    cout << "P is pointer pointing towards a address, and shows its value : " << *p << endl;
    cout << "Here * is essentially a derefercing operator" << endl;
    cout << "P without the star is : " << p << endl;

    cout << "Pointer is also stores somewhere in the memory : " << &p << endl;

    cout << "Size of a Int Data Type : " << sizeof(num) << endl;
    cout << "Size of a Pointer where address is stored : " << sizeof(*p) << endl;

}