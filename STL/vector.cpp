#include <iostream>
#include <vector>
using namespace std;

// Vector is a dynamic array

int main(){

    vector<int> v;   // Initialiting the vector

    cout << "Current Capacity of Vactor V : " << v.capacity() << endl;

    v.push_back(1);  // inserting a number in vector

    cout << "Current Capacity of Vector after 1 push back : " << v.capacity() << endl;

    v.push_back(2);

    cout << "Current Capacity of Vector after 2nd push back : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Current Capacity of Vector after 3rd push back : " << v.capacity() << endl;

    cout << "Size of our Vector : " << v.size() << endl;

    // here size of vector is 3 but capacity is 4...
    // vector doubles its size everytime it extends itself
    // for eg --> from 1 to 2, then 2  to 4, then 4 to 8
    // while size represents the elements presently occpying places in the vector

    cout << endl;
    // .at(index) also works here
    cout << "Using .at() : " << v.at(2) << endl;

    cout << "First Element : " << v.front() << endl;
    cout << "Last Element : " << v.back() << endl;

    cout << endl;

    cout << "Now Looping through a vector : " << endl;

    cout << "before pop" << endl;
    for(int i:v){                   // this is how we loop through a vector;
        cout << i << endl;
    }

    v.pop_back();   // Removes the last element from vector here, ie 3

    cout << endl;
    cout << "After pop : " << endl;

    for(int i:v){
        cout << i << endl;
    }


    cout << endl;
    cout << "Testing the clear function of vectors : " << endl;
    cout << "Vector Size before clear --> " << v.size() << endl;
    cout << "Vector Capacity before clear --> " << v.capacity() << endl;

    v.clear();

    cout << "Vector Size after clear --> " << v.size() << endl;
    cout << "Vector Capacity after clear --> " << v.capacity() << endl;

    // Vector capcity remains the same 

    // Other ways to initialize a vector 

    vector<int> v(5,1);  // create a vector a capacity 5 , and all element's value is set to 1
    // vector <type> name(capacity, elements)

    vector<int> another(v);  // creates a an identical vector to that of V
    // vector<type> name(vectorName)

}