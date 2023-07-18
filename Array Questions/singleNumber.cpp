#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums){

    sort(nums.begin(), nums.end());

    int i = 0;
    while(i < nums.size())
    {
        if(i == nums.size() - 1){
            return nums[i];
        }
        cout << nums[i] << " and " << nums[i + 1] << endl;
        if(nums[i] != nums[i + 1]){
            return nums[i];
        }
        else{
            i = i + 2;
        }
    }
    
    return 0;

}


int main(){

    int count;
    cout << "Enter your array length : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    
    int ans =  search(v);

    cout << "Single Number is : " << ans << endl;
}