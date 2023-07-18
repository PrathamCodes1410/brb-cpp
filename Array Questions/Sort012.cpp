#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(vector<int>& nums){

    vector<int> f(3,0);

    for (int i = 0; i < nums.size(); i++)
    {
        f[nums.at(i)]++;
    }
    nums.clear();
    int j = 0;
    while(j < f.size())
    {
        while(f.at(j) != 0){
            nums.push_back(j);
            f[j]--;
        }

        j++;
    }
    
    for(int i : nums){
        cout << i << endl;
    }

}


int main(){

    int count;
    cout << "Enter length of your vector : ";
    cin >> count;
    vector<int> v;
    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your num " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }
    
    sort(v);
}