#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){



        int n, m, k;
        cin >> n >> m >> k;
        vector<int> jelly;
        vector<int> gelly;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            jelly.push_back(a);
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            gelly.push_back(a);
        }

        sort(jelly.begin(), jelly.end());
        sort(gelly.begin(), gelly.end());

        for(int i : gelly){

            cout << i << " ";

        }

        for (int i = 1; i <= k; i++)
        {
            if(i % 2 == 0){
                cout << "even" << endl;
                cout << gelly[m-1] << endl;
                cout << jelly[0] << endl;
                if(gelly[m-1] > jelly[0]){
                    cout << "swapping : " << gelly[m-1] << " and " << jelly[0] << endl;
                    int v = gelly[m-1];
                    gelly[m-1] = jelly[0];
                    jelly[0] = v;
                }
            }
            else{
                cout << "odd" << endl;
                if(jelly[n-1] < gelly[0]){
                    cout << "swapping : " << jelly[n-1] << " and " << gelly[0] << endl;
                    int v = jelly[n-1];
                    jelly[n-1] = gelly[0];
                    gelly[0] = v;
                }
            }
            sort(jelly.begin(), jelly.end());
            sort(gelly.begin(), gelly.end());
        }
        int count = 0;
        for(int i : jelly){
            count = count + i;
        }
        cout << count << endl;
    }
}