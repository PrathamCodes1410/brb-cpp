#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(vector<int>& nums){
    int i = 0;
    int count = 0;
    while(i < nums.size())
    {
        if(nums.at(i) == 0){
            nums.erase(nums.begin() + i, nums.begin() + i + 1);
            count++;
            i = -1;
        }
        cout << "At this stage -----> ";
        for(int j : nums){
            cout << j << " ";
        }
        cout << endl;
        i++;
    }

    while(count > 0){
        nums.push_back(0);
        count--;
    }

    // Printing the final answer

    cout << "The Final Answer is : ";
    for(int k : nums){
        cout << k << " ";
    }

}



int main(){
    int count;
    cout << "Enter the size of your array : ";
    cin >> count;

    vector<int> nums;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;
        nums.push_back(num);
    }
    
    sort(nums);
}