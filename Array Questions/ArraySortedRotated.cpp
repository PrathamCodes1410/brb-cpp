#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> nums){

    bool state = true;
    vector<int> another(nums);
    int x = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if(nums.at(i) > nums.at(i + 1)){
            x = i + 1;
            break;
        }
    }
    if(x == 0){
        return true;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums.at(i) != another.at((i + x) % another.size())){
            state = false;
            break;
        }
    }
    
    cout << x << endl;
    cout << state << endl;
    return state;
}


int main(){

    int count;
    cout << "Enter the size of the array : ";
    cin >> count;

    vector<int> nums;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your no. " << i + 1 << " : ";
        cin >> num;
        nums.push_back(num);
    }
    
    check(nums);

}

/*
1752. Check if Array Is Sorted and Rotated
Given an array nums, 
return true if the array was originally sorted in non-decreasing order, 
then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an 
array B of the same length such that A[i] == B[(i+x) % A.length], 
where % is the modulo operation.
*/