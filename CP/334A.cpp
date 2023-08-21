#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    vector<int> v(3, 0);
    for (int i = 0; i < s.length(); i=i+2)
    {
        if(s[i] == '1'){
            v[0]++;
        }
        else if(s[i] == '2'){
            v[1]++;
        }
        else{
            v[2]++;
        }
    }
    string ans;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            if(i == 0){
                ans.push_back('1');
                ans.push_back('+');
            }
            else if(i == 1){
                ans.push_back('2');
                ans.push_back('+');
            }
            else{
                ans.push_back('3');
                ans.push_back('+');
            }
        }
    }
    ans.pop_back();
    cout << ans << endl;
}