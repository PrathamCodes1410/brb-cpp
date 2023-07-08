// Maps
// They have key pair values just like a dictionary
// returns sorted and unsorted
// by defualt sorted
#include <iostream>
#include <map>
using namespace std;

int main(){

    // creating a map of string and strings
    map<string, string> m;

    // inserting value into map
    m["India"] = "New Dehli";
    m["South Africa"] = "Cape Town";
    m["United States"] = "Washington D C";
    m["Britain"] = "London";

    // another way to insert
    m.insert({"Austria", "Vienna"});
    m.insert({"Pakistan", "Islamabad"});

    // traversing through the map
    cout << "Before Erase : " << endl;

    // auto is selected instead of int for i's datatype
    for(auto i:m){
        cout << i.first << " : " << i.second << endl;
    }

    cout << endl;
    cout << "After Erase : " << endl;

    // erasing key-value pairs in map
    // mapName.erase(key)
    m.erase("Pakistan");
    m.erase("London");  //Value does not work

    // .count(key) returns bool
    cout << "Does Britain exist in the map : " << m.count("Britain") << endl;

    cout << endl;
    cout << "After Erase : " << endl;
    for(auto i:m){
        cout << i.first << " : " << i.second << endl;
    }


    // get pointer to key value pair
    auto point = m.find("India");
    cout << endl;
    cout << "We have pointer to the key : " << (*point).first << " : " << (*point).second << endl;



}