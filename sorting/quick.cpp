#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> & v, int s, int e){
    int count = 0;
    for (int i = s + 1; i < e; i++)
    {
        if(v[s] > v[i]){
            count++;
        }
    }
    cout << endl;
    cout << "Swapped for Pivot : " << v[s] << " " << v[s + count] << endl;
    swap(v[s], v[s + count]);

    int i = s;
    int j = e - 1;
    int pivotIndex = s + count;
    while(i < pivotIndex && j > pivotIndex){

        while(v[i] < v[pivotIndex]){
            i++;
        }
        while(v[j] >= v[pivotIndex]){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            //cout << "this is i : " << i << endl;
            //cout << "this is j : " << j << endl;
            //cout << "this is pivotIndex : " << pivotIndex << endl;
            cout << "Swapped this : " << v[i] << " " << v[j] << endl;
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    
    return pivotIndex;
    

}


int sort(vector<int> & v, int s, int e){

    if(s >= e){
        return 0;
    }
    cout << "Current s is : " << s << endl;
    cout << "Current e is : " << e << endl;
    int index = pivot(v, s, e);
    cout << "Current Pivot Index is : " << index << endl;
    cout << "Current Array is : ";
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    sort(v, s, index);
    sort(v, index + 1, e);

    return 1;

}



int main(){

    int count;
    cout << "Enter the size of your array : ";
    cin >> count;
    vector<int> v;
    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;
        v.push_back(num);
    }
    
    sort(v, 0, v.size());

}