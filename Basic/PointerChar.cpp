#include <iostream>
using namespace std;

int main(){

    char c[6] = "abcde";

    cout << "This is c : " << c << endl;
    cout << "This is c with an & : " << &c << endl;

    cout << "3rd element is : " << *(c+2) << endl;
    cout << "Address of 3rd element in C : " << &c + 2 << endl;
    // 0a to 16, moved on by 8 bytes, 4 bytes * 2 memory blocks

    cout << "C with * : " << *(c) << endl;
    cout << "C + 1 with * : " << *(c + 1) << endl;

    cout << endl;
    cout << endl;
    // c = &c[0]
    // c contains address of the first element
    char *p = &c[0];

    cout << "*p initialized with c value is : " << *p << endl;
    cout << "p is : " << p << endl;
    cout << "p with & is " << &p << endl;

    *p = *p + 1;
    // upon this a should have changed its value to b ie 64 + 1 = 65 , by ASCII

    cout << "Now *p value is : " << *p << endl;
    cout << "-->" << c << endl;
}