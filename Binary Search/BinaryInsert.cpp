// 35. Search Insert Position
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int insert(vector<int> & nums, int target){

    int s = 0;
    int e = nums.size() - 1;
    int ans = 0;

    while(s <= e){
        int mid = (s+e) / 2;
        cout << "This is current mid " << mid << endl;

        if(nums[mid] < target){
            cout << "target is bigger" << endl;
            s = mid + 1;
        }
        else if(nums[mid] > target){
            cout << "target is smaller" << endl;
            e = mid - 1;
            ans =  mid;
        }
        else{
            return mid;
        }
    }

    return ans;
}



int main(){

    int count;
    cout << "Enter the size of the array : ";
    cin >> count;


    vector<int> v;
    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter the number " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }

    int target;
    cout << "Enter the target number : ";
    cin >> target;
    cout << insert(v, target) << endl;
}