#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove(vector<int>& nums){

    int k = 0;
    int i = 0;
    while(i < nums.size() - 1){
        if(nums.at(i) == nums.at(i + 1)){
            nums.erase(nums.begin() + i);
        }
        else{
            i++;
            k++;
        }
    }

    for(int i : nums){
        cout << i << endl;
    }

    return k;
}

int main(){

    vector<int> nums;
    int count;
    cout << "Enter your array length : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your num : ";
        cin >> num;
        nums.push_back(num);
    }
    
    remove(nums);

}