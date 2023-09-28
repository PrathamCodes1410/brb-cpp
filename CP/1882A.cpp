#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int s;
        cin >> s;

        vector<int> vec;

        while(s--){
            int input;
            cin >> input;
            vec.push_back(input);
        }
        int h = 1;
        for(int i : vec)
        {
            if(i == h){
                h++;
            }
            h++;
        }
        cout << --h << endl;
    }
}