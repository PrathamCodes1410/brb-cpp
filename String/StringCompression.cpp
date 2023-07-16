#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void compress(vector<char>& v){

    sort(v.begin(), v.end());
    vector<char> ans;
    int i = 0;
    while(i < v.size())
    {
        int j = i + 1;
        while(v.size() > j && v.at(i) == v.at(j)){
            j++;
        }

        ans.push_back(v.at(i));

        string ch = to_string((j - i));
        if(ch.length() > 0){
            int k = 0;
            while(k < ch.length()){
                ans.push_back(ch[k]);
                k++;
            }
        }
        i = j;
    }
    v.clear();
    v = ans;
    for(auto i : v){
        cout << i << endl;
    }
}


int main(){

    int count;
    cout << "Enter length of your array : ";
    cin >> count;

    vector<char> v;

    for (int i = 0; i < count; i++)
    {
        char c;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> c;
        v.push_back(c);
    }
    
    compress(v);
}