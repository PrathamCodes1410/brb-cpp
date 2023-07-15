#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2)
{

    int len1 = s1.length();
    int len2 = s2.length();
    vector<int> count(26, 0), count2(26, 0);
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i] - 'a']++;
    }
    int i = 0, j = 0;
    while (j < len2)
    {

        if ((j - i) < len1) // len1 is the window size
        {
            count2[s2[j] - 'a']++;
            j++;
        }
        else
        {
            count2[s2[i] - 'a']--; // removing previous character count from the array, as window is moved
            i++;                   // moving the window towards right hand side
        }
        if (count2 == count)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    string s1;
    string s2;

    cout << "Enter your string 1 : ";
    getline(cin, s1);
    cout << "Enter your string 2 : ";
    getline(cin, s2);

    bool ans = check(s1, s2);
    cout << "Does it exist : " << ans << endl;
}