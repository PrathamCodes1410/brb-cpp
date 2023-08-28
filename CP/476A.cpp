#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool recur(int n, int m, int count = 0){

    count++;
    int tempN = n;
    int tempM = m * count;
    //cout << "Iterating for : " << tempM << endl;
    //vector<int> v;
    for(int i = 0; i < (m * count); i++)
    {
        if(tempN - 2 >= tempM - 1){
            //v.push_back(2);
            tempN = tempN - 2;
            tempM--;
        }
        else if(tempN - 1 >= tempM - 1){
            //v.push_back(1);
            tempN = tempN - 1;
            tempM--;
        }
        else{
            //cout << "kalesh" << endl;
            cout << -1 << endl;
            return false;
        }
    }
    //cout << "For this attempt : ";
    //for(int i : v){
    //    cout << i << " ";
    //}
    cout << endl;
    if(tempN == 0){
        cout << m * count << endl;
        return true;
    }
    else{
        recur(n, m, count);
    }
}


int main(){

    int n, m;
    cin >> n >> m;

    if(m > n){
        cout << -1 << endl;
    }
    else{
        recur(n, m);
    }
}