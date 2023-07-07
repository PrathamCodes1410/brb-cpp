#include <iostream>
#include <array>
using namespace std;

int main(){
    int basic[3] = {1,2,3}; // creating an array without STL

    array<int, 3> stl = {1,2,3};  // creating an array with STL

    cout << "Size of the array STL : " << stl.size() << endl;

    for (int i = 0; i < stl.size(); i++)
    {
        cout << stl[i] << endl;    // normally using squre brackets
    }
    
    cout << "using .at() from STL : " << stl.at(2) << endl;  // using .at(index) by STL

    cout << "Checks if array is empty or not : " << stl.empty() << endl;  // returns bool

    cout << "First Element of the array : " << stl.front() << endl;
    cout << "Last Element of the array : " << stl.back() << endl;
 }