#include <iostream>
using namespace std;

int main(){

    int count;
    cout << "Enter the length of the array : ";
    cin >> count;

    // Now declaring an array with dynamic memory
    // Array is declared in Heap instead of Stack, Stack memory is allocated in compilation time
    // Here, we take in input from user after compilation, so we cannot allocate the memory in Stack
    // Now lets allocate some memory in heap

    int *ref = new int[count];
    // this memory in now created in heap but it has no name
    // so lets create a pointer in stack to point towards first element of the array in heap

    for (int i = 0; i < count; i++)
    {
        cout << "Enter your number : ";
        cin >> ref[i];
    }
    

    // print the numbers in the array
    for (int i = 0; i < count; i++)
    {
        cout << ref[i] << " " << &ref[i] << endl;
    }
    
    // you need to free up memory from heap;
    delete []ref;

    cout << *ref << endl;
    // if garbage value is stored then, memory is free

}