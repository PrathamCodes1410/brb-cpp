#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void add(vector<int>& num, int k){

    int number = 0;
    for (int i = 0; i < num.size(); i++)
    {
        number = number + num.at(i) * (pow(10, (num.size() - i - 1)));
    }
    
    //cout << "Number is : " << number << endl;

    int newNum = number + k;
    vector<int> v;
    for (int i = 1; i <= num.size(); i++)
    {
        cout << "This is newNum : " << newNum << endl;
        int div = (pow(10, (num.size() - i)));
        int c = newNum / div;
        if(c > 9){
            div = (pow(10, (num.size() - i + 1)));
            c = newNum / div;
            i--;
        }
        newNum = newNum % div;
        cout << "This is div : " << div << endl;
        cout << "This is C : " << c << endl;
        v.push_back(c);
      
    }
    cout << endl;
    cout << "Making Sure : ";
    for(int i : v){
        cout << i << " ";
    }

}


int main(){

    int count, k;
    cout << "Enter the size of the array : ";
    cin >> count;

    cout << "Enter K : ";
    cin >> k;

    vector<int> num;
    for (int i = 0; i < count; i++)
    {
        int n;
        cout << "Enter your no. " << i + 1 << " : ";
        cin >> n;
        num.push_back(n);
    }
    
    add(num, k);

}