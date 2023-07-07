#include <iostream>
#include <deque>
using namespace std;

int main(){
    // deque is nothing but a double ended queue

    // creating a deque
    deque<int> d;

    // inserting a element at back 
    d.push_back(1);
    d.push_back(2);

    // now inserting a element at the front
    d.push_front(0);

    // looping through the deque
    cout << "Now looping through the deque" << endl;
    for(int i:d){
        cout << i << endl;
    }

    // .at() on deque
    cout << "Printing the 1st index in the deque with .at(index) method : " << d.at(1) << endl;

    // Front and Back of the Deque

    cout << "Front is : " << d.front() << endl;
    cout << "Back is : " << d.back() << endl;

    // This checks if the deque is empty or not
    // returns bool
    cout << "Empty : " << d.empty() << endl;

    // checks the size of deque
    cout << "Size before erase : " << d.size() << endl;

    // now this function erases from the deque
    // takes in two arguments , from which index to start the deletion and to which index
    // .erase(start , end)  deletes elements from start to end but not including end

    d.erase(d.begin() , d.begin() + 1);  // this will erase our index no. 0, which is 0

    cout << "Size after the erase : " << d.size() << endl;

    // Note : erase removes the element from the deque but the max size or capacity of the deque stays the same
    // thus, only size will decrease
}