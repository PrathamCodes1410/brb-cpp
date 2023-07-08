#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(7);
    v.push_back(5);

    for(int i : v){
        cout << i << endl;
    }

    // using binary search via STL algorithms
    // binary_search(from, to, findValue)
    // returns bool
    cout << "Finding 2 with binary search : " << binary_search(v.begin(),v.end(),3) << endl;
    cout << "Finding 10 with binary search : " << binary_search(v.begin(),v.end(),10) << endl;

}