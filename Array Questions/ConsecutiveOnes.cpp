#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countOne(vector<int>& nums){

    int c = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums.at(i) == 1){
            c++;
        }
        else{
            if(c > total){
                total = c;
            }
            c = 0;
        }
    }

    return c;
}


int main(){

    int count;
    cout << "enter size of your array : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number : " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }

    int ans = countOne(v);

    cout << "Final ans is : " << ans << endl;
}