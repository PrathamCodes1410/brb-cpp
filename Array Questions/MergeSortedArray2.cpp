#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// will return a vector
auto sort(vector<int> v1, vector<int> v2)
{
    int i = 0;
    int j = 0;
    bool act = true;
    vector<int> r;
    while (j < v2.size()|| i < v1.size())
    {
        cout << "Current v1 is : " << v1[i] << endl;
        cout << "Current v2 is : " << v2[j] << endl;
        if (act == true)
        {
            if (v1.at(i) < v2.at(j))
            {
                cout << "1" << endl;
                r.push_back(v1.at(i));
                if (i + 1 < v1.size())
                {
                    i++;
                }
                else {
                    i++;
                    act = false;
                }
            }
            else if (v1.at(i) >= v2.at(j))
            {
                r.push_back(v2.at(j));
                cout << "2" << endl;
                if (j + 1 < v2.size())
                {
                    j++;
                }
                else {
                    j++;
                    act = false;
                }
            }
        }
        else{
            while(j < v2.size()){
                r.push_back(v2.at(j));
                j++;
            }
            while(i < v1.size()){
                r.push_back(v1.at(i));
                i++;
            }
        }
        cout << "Current Array is : ";
        for (int i : r)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{

    int s1;
    int s2;

    cout << "Enter the size of first array : ";
    cin >> s1;

    vector<int> nums1;

    for (int i = 0; i < s1; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        nums1.push_back(num);
    }

    cout << "Enter the size of second array : ";
    cin >> s2;

    vector<int> nums2;

    for (int i = 0; i < s2; i++)
    {
        int num;
        cout << "Enter your number " << i + 1 << " : ";
        cin >> num;

        nums2.push_back(num);
    }

    sort(nums1, nums2);
}