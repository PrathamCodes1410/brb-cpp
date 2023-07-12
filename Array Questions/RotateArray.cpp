#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){

    vector<int> v;
    for (int i = 0; i < nums.size() - k; i++)
    {
        //cout << nums.at(i) << endl;
        v.push_back(nums.at(i));
    }
    // erasing V from nums
    nums.erase(nums.begin(), nums.end() - k);

    for(int i : v){
        nums.push_back(i);
    }
    // printing final answer : 
    cout << endl;
    cout << "Final Answer : ";
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
}


int main(){

    int count;
    cout << "Enter the size of your array : ";
    cin >> count;
    int k;
    cout << "Enter the index where you need to rotate array from : ";
    cin >> k;
    cout << endl;
    vector<int> nums;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;
        nums.push_back(num);
    }

    rotate(nums, k);
}