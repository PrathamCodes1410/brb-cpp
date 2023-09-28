#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;
    while(test--){

        int num;
        cin >> num;
        vector<int> vec;
        vec.push_back(1);
        vec.push_back(3);
        int c = 1;
        for (int i = 2; i < num; i++)
        {
            while((vec[i-1] + c) * 3 % (vec[i-2] + vec[i-1]) == 0){
                c = c + 1;
            }
            vec.push_back(vec[i-1] + c);
            c = 1;
        }
        int j  = 0;
        while(num--){
            cout << vec[j] << " ";
            j++;
        }
        cout << endl;
        vec.clear();
    }
}