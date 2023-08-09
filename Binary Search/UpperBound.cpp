#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int upper(vector<int> arr, int target){

    int s = 0;
    int e = arr.size() - 1;
    int ans = 0;

    while(s <= e){

        int mid = (s + e)/2;

        if(arr[mid] > target){
            e = mid - 1;
        }
        else if(arr[mid] <= target){
            s = mid + 1;
            ans = mid + 1;
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
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    int t;
    cout << "Enter your target : ";
    cin >> t;
    cout << "Answer is : " << upper(v, t) << endl;
}