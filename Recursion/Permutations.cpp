#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>>& ans){

    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index],nums[i]);
        cout << "swapped : " << nums[index] << " and " << nums[i] << endl;
        solve(nums, index+1, ans);

        // backtracking to previous version of the 
        swap(nums[index], nums[i]);


        cout << "Current Vector is : " << endl;
        for(int j : nums){
            cout << j << " ";
        }
        cout << endl;
    }
    
}



vector<vector<int>> permute(vector<int>& nums){

    int index = 0;
    vector<vector<int>> ans;
    solve(nums, index, ans);

    cout << "final ans is : " << endl;

    for(auto i : ans){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    return ans;
}



int main(){

    int count;
    cout << "Enter your array size : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    
    permute(v);


}