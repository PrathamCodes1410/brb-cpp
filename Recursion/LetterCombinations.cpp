#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<string> & ans, string digits,string current,int currentIndex, string mapping[]){
    if(currentIndex >= digits.length()){
        ans.push_back(current);
        cout << "reg" << endl;
        return 0;
    };
    cout << "Current index is : " << currentIndex << endl;
    int num = digits[currentIndex] - '0';
    cout << "Current num is : " << num << endl;
    string mapped = mapping[num];
    cout << "Current mapped is : " << mapped << endl;
    for(int i = 0; i < mapped.length(); i++)
    {
        current.push_back(mapped[i]);
        cout << "current Current is : " << current << endl;
        return solve(ans,digits,current,currentIndex+1,mapping);
        current.pop_back();
    }
}
vector<string> letterCombinations(string digits){
    cout << "reached here" << endl;
    vector<string> ans;
    string current;
    int currentIndex = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(ans,digits,current,currentIndex,mapping);

    cout << "done" << endl;
    for(string s : ans){
        cout << s << endl;
    }
    return ans;
}
int main(){
    string number;
    cout << "Enter your number : ";
    cin >> number;
    letterCombinations(number);
}
