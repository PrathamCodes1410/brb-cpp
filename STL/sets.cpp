// Sets only can have unique elements
// Set elements cannot be modified, can only be added or deleted
// Set is always returns itself sorted
#include <iostream>
#include <set>
using namespace std;

int main(){
    
    set<int> s;

    // .insert(value) is used to add elements
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(1);  // repeating 1

    // traversing trough the set
    for(int i : s){
        cout << i << endl;
        // 1 is not printed twice
    }


    // .erase(from , to or index) can be used to delete
    s.erase(s.begin());  // will delete 1

    // to check if first element is erased or not
    for(int i : s){
        cout << i << endl;
    }

    // .count(value)  , returns bool, if value exist in set
    cout << "Is 1 present in the set : " << s.count(1) << endl;

    // .find() returns the location / pointer of the element
    //  interator is a standard container made up of unique keys
    // which can be retrieved in logarithmic time O(log n)
    set<int>::iterator p = s.find(5);

    cout << "P pointer points to the element with value : " << *p << endl;
}