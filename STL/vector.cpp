#include <iostream>
#include <vector>
using namespace std;

// Vector is a dynamic array

int main(){

    vector<int> v;   // Initialiting the vector

    cout << "Current Capacity of Vactor V : " << v.capacity() << endl;

    v.push_back(1);  // inserting a number in vector

    cout << "Current Capacity of Vector after 1 push back : " << v.capacity() << endl;



}