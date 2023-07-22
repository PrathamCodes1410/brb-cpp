#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){


    sort(nums.begin(), nums.end());
    vector<int> ans;
    int s = 0;
    int e = nums.size() - 1;

    while(s < e){

        if(nums[s] + nums[e] == target){
            ans.push_back(s);
            ans.push_back(e);

            for(int i : ans){
                cout << i << endl;
            }

            return ans;
        }
        else if(nums[s] + nums[e] > target){
            e--;
        }
        else{
            s++;
        }

    }
    for(int i : ans)
    {
        cout << i << endl;
    }
    return ans;
}




int main(){

    int count;
    cout << "Enter length of your array : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    int t;
    cout << "Enter your target : ";
    cin >> t;
    twoSum(v, t);

}