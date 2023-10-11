#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    vector<int> a;
    for (int i = 0; i < numbers.size(); i++)
    {
        int low = i + 1;
        int high = numbers.size() - 1;
        int mid = -1;
        while(low <= high){
            mid = (low + high) / 2;
            cout << "current mid is : " << mid << " and : " << numbers[mid] << endl;
            if(numbers[mid] + numbers[i] > target){
                cout << "kam hua " << endl;
                high = mid - 1;
            }
            else if(numbers[mid] + numbers[i] < target){
                cout << "badh gya" << endl;
                low = mid + 1;
            }
            cout << "current total is : " << numbers[i] + numbers[mid] << endl;
            if(numbers[i]+numbers[mid] == target){
                break;
            }
        }
        cout << "here2" << endl;
        if(numbers[mid] + numbers[i] == target){
            cout << "done" << endl;
            numbers.clear();
            a.push_back(i + 1);
            a.push_back(mid + 1);
            return a;
            break;
        }
        a.clear();
    }
    for(int i : a){
        cout << i << endl;
    }
    return a;
}


int main(){

    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> ans = twoSum(v, target);
    cout << "here" << endl;
    for(int i : ans){
        cout << i << endl;
    }
}