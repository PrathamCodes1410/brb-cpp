#include<iostream>
using namespace std;


int main(){

    long long n;
    cin >> n;
    long long high = 0;
    long long low = INT64_MAX;
    int count = 0;
    for (long long i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num > high){
            if(i != 0){
                count++;
            }
            high = num;
        }
        if(num < low){
            if(i != 0){
                count++;
            }
            low = num;
        }
    }
    cout << count << endl;
}