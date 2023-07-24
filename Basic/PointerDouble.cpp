#include <iostream>
using namespace std;


int main(){

    int num = 5;

    int * firstPointer = &num;

    int ** secondPointer = &firstPointer;


    cout << "Address of num is : " << &num << endl;
    cout << "Value of num is : " << num << endl << endl;


    cout << "Address of First Pointer is : " << &firstPointer << endl;
    cout << "Value inside the first pointer is : " << firstPointer << endl;
    cout << "Value first pointer pointing is : " << *firstPointer << endl;

    cout << endl;

    cout << "Address of Second Pointer is : " << &secondPointer << endl;
    cout << "Value inside the second pointer is : " << secondPointer << endl;
    cout << "Value second pointer is pointing towards is : " << *secondPointer << endl;
    cout << endl;

    cout << "Double Pointers finally pointing towards : " << **secondPointer << endl;
}