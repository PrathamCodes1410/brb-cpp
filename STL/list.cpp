// Also known as doubly linked list
// we will not be able to use .at() operation as we only have pointers
// for just begining and ending of the list, thus called doubly
#include <iostream>
#include <list>
using namespace std;

int main(){
    
    // initialising a list
    list<int> l;

    // push back and push front are avalaible here too
    l.push_back(1);
    l.push_back(2);
    l.push_front(0);

    // looping trough the list
    cout << "Looping through the list : " << endl;
    
    for (int i : l)
    {
        cout << i << endl;
    }

    // front , back and erase also works here
    cout << "Front is : " << l.front() << endl;
    cout << "Back is : " << l.back() << endl;
    
    l.erase(l.begin());

    // size of list
    cout << "Size of list after erase is : " << l.size() << endl;

    // pop back
    l.pop_back();   // removes last element
    l.pop_front(); // removes the front element

    cout << "Size of list after pops : " << l.size() << endl;
}