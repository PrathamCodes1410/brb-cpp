#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<char>& s){
    int start = 0;
    int end = s.size() - 1;
    
    while(start < end){
        swap(s.at(start), s.at(end));
        start++;
        end--;
    }

    cout << "Priting out the reversed string : ";
    for(auto i : s){
        cout << i << " ";
    }
    
}


int main(){

    vector<char> s;

    int count;
    cout << "Enter the length of your string : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }
    
    reverse(s);
}