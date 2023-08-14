// 1218. Longest Arithmetic Subsequence of Given Difference
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSubsequence(vector<int>& arr, int difference) 
{
    int streak = 1;
    int ans = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] + difference == arr[i + 1]){
            streak++;
        }
        else{
            if(ans < streak){
                ans = streak;
                streak = 1;
            }
            else{
                cout << "was here" << endl;
                streak = 1;
            }
        }
    }
    if(ans < streak)
    {
        ans = streak;
    }
    cout << "Ans is : " << ans << endl;
    return ans;
}



int main(){

    int count;
    cout << "Enter the length of your array : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number : " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }

    int diff;
    cout << "What is the difference : ";
    cin >> diff;


    longestSubsequence(v, diff);


}