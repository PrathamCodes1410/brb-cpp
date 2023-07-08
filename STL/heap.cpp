// heap is like priority queue
// heap is of like two types : max and min
// max heap gives out max element out of heap
// similarly min gives out min element out of heap
#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // MAX HEAP
    priority_queue<int> maxi;

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);

    cout << "Top element of maxi heap is : " << maxi.top() << endl;

    mini.push(1);
    mini.push(0);
    mini.push(2);

    cout << "Top element of mini heap is : " << mini.top() << endl;
}