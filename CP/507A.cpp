#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> pa;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        pa.push_back({num, i+1});
    }
    sort(pa.begin(), pa.end());
    int sum = 0;
    int count = 0;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {   
        sum = sum + pa[i].first;
        if(sum > k){
            sum = sum - pa[i].first;
            //cout << "this is k : " << k << endl;
            //cout << "sum will be : " << sum << endl;
            break;
        }
        count++;
        p.push_back(pa[i].second);
    }
    cout << count << endl;
    int i = 0;
    while(i < p.size())
    {
        cout << p[i] << " ";
        i++;
    }
    cout << endl;
    
}