#include <iostream>
using namespace std;


int main(){

    int arr[5] = {10,20,30,40,50};

    cout << "This is upon printing arr : " << arr << " --> address of first element of array." << endl;

    int *ptr = arr;

    cout << "This is the ptr : " << ptr << endl;
    cout << "ptr is refering to : " << *ptr << endl;

    cout << "Ptr + 1 is : " << ptr + 1 << endl;
    // This is 32 bit machine so 4 byte is allocated to a pointer

    // here f8 address is followed by fc address, 4 bytes


    *(ptr + 1) = 30;

    // now 2nd value of the array should have changed to 30

    cout << "Previous value was 20 : " << arr[1] << endl;

}