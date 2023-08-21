#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v;
    int high = 0;
    int highIndex = 0;
    int lowIndex = 0;
    int low = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if(num > high){
            high = num;
            highIndex = i;
        }
        if(num <= low){
            low = num;
            lowIndex = i;
        }
        v.push_back(num);
    }
    
    //cout << "high is : " << high << endl;
    //cout << "high index is : " << highIndex << endl;
    //cout << "low is : " << low << endl;
    //cout << "lowIndex is : " << lowIndex << endl;
    int count = 0;
    while(highIndex != 0 || lowIndex != n - 1){
        //cout << "yaha" << endl;
        if(highIndex - 1 != lowIndex){
            if(highIndex != 0){
                swap(v[highIndex], v[highIndex - 1]);
                highIndex--;
                count++;
            }
            if(highIndex - 1 == lowIndex){
                swap(v[highIndex], v[lowIndex]);
                highIndex--;
                lowIndex++;
                count++;
            }
            else if(lowIndex != n - 1){
                swap(v[lowIndex], v[lowIndex + 1]);
                lowIndex++;
                count++;
            }
        }
        else{
            swap(v[highIndex], v[lowIndex]);
            highIndex--;
            lowIndex++;
            count++;
        }

        //cout << endl;
        //for(int i : v){
            //cout << i << " ";
        //}
        //cout << endl;
        //cout << "current high is " << highIndex << endl;
    }

    cout << count << endl;
}