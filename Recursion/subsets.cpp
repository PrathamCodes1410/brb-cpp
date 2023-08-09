#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int config(vector<vector<int>>& v, vector<int> & nums, int s, vector<int> temp){

    
    if(s >= nums.size()){
        for(vector<int> i : v){
            if(i == temp){
                return 0;
            }
        }
        v.push_back(temp);
        cout << "temp added" << endl;
        return 0;
    }

    // include
    vector<int> temptemp = temp;
    temptemp.push_back(nums[s]);
    cout << "included and current s is : " << s + 1 << endl;
    config(v, nums, s + 1, temptemp);


    // exclude
    cout << "Excluded and current s is : " << s + 1 << endl;
    config(v, nums, s + 1, temp);
}



vector<vector<int>> subsets(vector<int>& nums){

    int s = 0;
    int e = nums.size();

    vector<vector<int>> v;

    // basic is the empty array
    vector<int> basic;
    sort(nums.begin(), nums.end());
    config(v, nums, s, basic);

    //printing v
    for(vector<int> i : v){
        cout << endl;
        if(i == basic){

            cout << "Empty" << endl;

        }
        for(int j : i){

            cout << j << " ";

        }
        cout << endl;
    }
}



int main(){

    int count;
    cout << "Enter size of your array : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your no " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    
    subsets(v);

}