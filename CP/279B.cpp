// Using Two Pointer Approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, n;
    cin >> n >> t;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int ans = 0;
    int temp = 0;
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {   
        count = count + v[i];
        if(count <= t){
            temp++;
        }
        else{
            count = count - v[j];
            j++;
        }
    }
    cout << temp << endl;
}