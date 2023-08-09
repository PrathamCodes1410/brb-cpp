#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lower(vector<int> v, int target){

    int s = 0;
    int e = v.size() - 1;
    int ans = e;

    while(s <= e){

        int mid = (s + e) / 2;
        cout << "Currenttly mid is : " << mid << endl;
        if(v[mid] >= target){
            e = mid - 1;
            ans = mid;
        }
        else if(v[mid] < target){
            s = mid + 1;
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

    cout << "Enter the your target number : ";
    int t;
    cin >> t;

    cout << "Ans is : " << lower(v, t) << endl;
    

}