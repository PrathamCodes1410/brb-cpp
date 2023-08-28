#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool possible(vector<long long> v, long long mid, long long n, long long h){

    long long total = 0;

    for (long long i = 0; i < n; i++)
    {
        if(i + 1 < n){
            long long g1 = mid;
            long long g2 = v[i + 1] - v[i];
            if(g1 > g2){
                total = total  + g2;
                //cout << "here g2 " << total << endl;
            }
            else{
                total = total + g1;
                //cout << "here g1 " << total << endl;
            }
        }
        else{
            total = total + mid;
            //cout << "else " << total << endl;
        }
    }

    if(total >= h){
        //cout << "Current mid is : " << mid << " and total " << total << endl;
        return true;
    }
    else{
        //cout << "Current mid is : " << mid << " and is total " << total << endl;
        return false;
    }
}

long long bullshit(vector<long long> v, long long min, long long max, long long n, long long h){

    long long k = h;
    while(min <= max){
        long long mid = (min + max) / 2;
        //cout << "MIN is : " << min << endl;
        //cout << "MAX is : " << max << endl;
        if(possible(v, mid, n, h)){
            max = mid - 1;
            if(mid < k){
                k = mid;
                //cout << "k is changed to : " << k << endl;
            }
        }
        else{
            min = mid + 1;
        }
    }

    return k;
}


int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n, h;
        cin >> n >> h;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {
            long long num;
            cin >> num;
            v.push_back(num);
        }

        long long min = 1;
        long long max = h;

        cout << bullshit(v, min, max, n, h) << endl;
    }
}