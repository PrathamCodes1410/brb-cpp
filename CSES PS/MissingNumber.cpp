#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int count;
    cin >> count;
    vector<int> v;
    for (int i = 0; i < count - 1; i++)
    {
        int num;
        cin >> num;

        v.push_back(num);
    }
    bool found = false;
    sort(v.begin(), v.end());
    if(count - 1 == 1){
        if(v[0] > 1){
            cout << 1 << endl;
            found = true;
        }
        else{
            cout << v[0] + 1 << endl;
            found = true;
        }
    }
    else{
        for (int i = 1; i < count - 1; i++)
        {
            if(v[i - 1] + 1 != v[i]){
                cout << v[i - 1] + 1 << endl;
                found = true;
            }
        }
    }
    if(found == false){
        cout << count << endl;
    }
}