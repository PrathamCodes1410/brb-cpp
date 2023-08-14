#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }

        // now we have an array a with int
        // solution starts here

        int notDiv = 0;
        int div = 0;
        int done = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j] % a[i] == 0)
                {
                    div++;
                    c.push_back(a[j]);
                }
                else
                {
                    notDiv++;
                    b.push_back(a[j]);
                }
            }

            if (div != 0 && notDiv != 0)
            {
                // true
                cout << b.size();
                cout << c.size();

                cout << endl;

                for (int j = 0; j < b.size(); j++)
                {
                    cout << b[j];
                }
                cout << endl;
                for (int j = 0; j < c.size(); j++)
                {
                    cout << c[j];
                }
                done = 1;
                break;
            }
            else{
                div = 0;
                notDiv = 0;
                b.clear();
                c.clear();
            }
        }
        if(done == 0){
            cout << -1 << endl;
            done = 0;
        }
    }
}