#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> & nums){

    vector<int> pos;
    vector<int> neg;


    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] >= 0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    vector<int> ans;
    int positive = 0;
    int negetive = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(i % 2 == 0 || i == 0){
            ans.push_back(pos[positive]);
            positive++;
        }
        else{
            ans.push_back(neg[negetive]);
            negetive++;
        }
    }
    nums = ans;
}


int main(){

    int count;
    cout << "Enter the size of your array : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    rearrange(v);

    for(int i : v){
        cout << i << endl;
    }
}