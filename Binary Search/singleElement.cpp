#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int singleNonDuplicate(vector<int>& nums) { 
    int i = 1;
    if(nums.size() == 1){
        return nums[0];
    }
    if(nums[0] != nums[1]){
        return nums[0];
    }
    while(i < nums.size()){
        if(nums[i] == nums[i+1]){
            i=i+2;
            continue;
        }
        if(nums[i] != nums[i-1]){
            return nums[i];
        }
        i++;
    }
    return nums[i-1];
}
int main(){

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << singleNonDuplicate(v) << endl;
}