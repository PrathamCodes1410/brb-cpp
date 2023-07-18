#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& nums){

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(!(nums.at(i) == nums.at(i + 1) - 1)){
            int num = nums.at(i) + 1;
            return num;
        }
    }
    if(nums[0] != 0){
        return 0;
    }
    return nums.at(nums.size() - 1) + 1;
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
    
    int ans = find(v);

    cout << "The missing number is : " << ans << endl;

}