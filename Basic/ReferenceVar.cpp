#include <iostream>
using namespace std;

void update(int & ref){

    cout << "This is ref in update : " << ref << endl;
    cout << "Wtf is this : " << &ref << endl;

    ref++;


}



int main(){

    int num = 5;

    // creating a ref variable to num 

    int & ref = num;

    cout << "Address of num is : " << &num << endl;

    cout << "Ref variable is pointing towards : " << ref << endl;
    cout << "Address of ref : " << &ref << endl;

    // when we a give an int to a fucntion it creates its temp copy, but instead
    // now we can pass on ref variable, so it can directly work on the original.

    update(ref);

    cout << "Updated this shit : " << num << endl;

}