#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &citations){

    int low = 0;
    int high = citations.size();
    int current = -1;
    while(low < high){

        int mid = (low + high) / 2;
        cout << "mid is : " << mid << endl;
        if(citations[mid] > citations.size() - mid){
            cout << "kaam hua" << endl;
            high = mid;
        }
        else if(citations[mid] <= citations.size() - mid){
            cout << "current yeh hai : " << citations[mid] << endl;
            if(citations[mid] > current){
                current = citations[mid];
            }
            low = mid + 1;
        }

    }

    return current;

}


int main(){

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    //cout << v.size() << endl;
    cout << hIndex(v) << endl;

}