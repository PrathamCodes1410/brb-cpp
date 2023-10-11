#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> v, int t = 0)
{

    vector<int> a;

    if (v.size() == 1)
    {
        return v[0];
    }

    if (t == 0 || v.size() % 2 != 0)
    {
        //cout << "yeh" << endl;
        int i = 1;
        while (i < v.size())
        {
            a.push_back(v[i]);
            i = i + 2;
        }
    }
    else
    {
        //cout << "badme yeh" << endl;
        int i = 0;
        while (i < v.size())
        {
            a.push_back(v[i]); //    4   8
            i = i + 2;
        }
    }
    if (t == 0)
    {
        t = 1;
    }
    else
    {
        t = 0;
    }
    return func(a, t);
    a.clear();
}

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        return 1;
    }

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    return func(v);
    v.clear();
}
