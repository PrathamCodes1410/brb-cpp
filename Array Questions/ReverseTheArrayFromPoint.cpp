// Problem Statement
// Given an array/list 'ARR' of integers and a position ‘M’. 
// You have to merse the array after that position.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void merse(vector<int>& arr, int count, int m){

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < arr.size(); i++)
    {
        if(i < m+1){
            v1.push_back(arr.at(i));
        }
        else{
            v2.push_back(arr.at(i));
        }
    }

    cout << "Printing V1 : ";

    for(int i : v1){
        cout << i << " ";
    }

    cout << endl;

    cout << "Priting V2 : ";

    for(int i : v2){
        cout << i << " ";
    }
    
    cout << endl;

    //cout << "Now we will reverse the V2 : ";

    for(int i = v2.size() - 1; i >= 0; i--){
        //cout << v2.at(i) << " ";

        v1.push_back(v2.at(i));
    }

    cout << "Final Answer is : ";

    for(int i : v1){
        cout << i << " ";
    }

}



int main(){

    int count;
    cout << "Enter Size of your array : ";
    cin >> count;

    vector <int> arr;

    cout << "Array should be Sorted, please keep that in mind" << endl;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        arr.push_back(num);
    }
    int m;
    cout << "Enter the index point from which you would like to merse : ";
    cin >> m;

    merse(arr, count, m);
}