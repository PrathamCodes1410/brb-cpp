// Last in, First out 
// LIFO
#include <iostream>
#include <stack>
using namespace std;


int main(){

    // creating a stack
    stack<int> s;

    // We can only push and pop here
    // push will place element on the top
    s.push(2);
    s.push(1);
    s.push(3);

    //pop will remove the top element aka last element to be pushes , here 3
    s.pop();

    // cannot loop through the stack
    // it will only return the top element of the so,

    cout << "Is this empty : " << s.empty() << endl;

    // returns top element of stack
    cout << s.top() << endl;
    
    
}