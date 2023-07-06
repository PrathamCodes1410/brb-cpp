#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool isPossible(int stalls[], int count, int k, int mid)
{
    sort(stalls, stalls + (count));

    int previousCowPosition = stalls[0];
    int LastCowPosition = stalls[count - 1];
    int kRemaining = k - 2;
    int space = 0;

    for (int i = 0; i < count; i++)
    {
        //cout << "Current Previous Cow postion is : " << previousCowPosition << endl;
        if(kRemaining == 0){
            return true;
        }
        if(stalls[i] - previousCowPosition >= mid && LastCowPosition - stalls[i] >= mid){
            kRemaining--;
            int pos = i;
            previousCowPosition = stalls[pos];
            //cout << "Cow places at position : " << stalls[pos];
        }
    }

    if(kRemaining > 0){
        return false;
    }

    return true;
}

int stallsangek(int stalls[], int count, int k)
{
    sort(stalls, stalls + (count - 1));
    int s = 0;
    int e = stalls[count - 1] - stalls[0];
    int ans = -1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, count, k, mid))
        {
            s = mid + 1;
            ans = mid;

            cout << "Success : Current Mid is : " << mid << endl;
        }
        else
        {
            e = mid - 1;
            cout << "Fail : Current Mid is : " << mid << endl;
        }

        mid = (s + e) / 2;
    }

    return ans;
}

int main()
{
    int count;
    cout << "Enter the number of Stalls :";
    cin >> count;

    int k;
    cout << "Enter the number of k : ";
    cin >> k;

    int stalls[25];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the Stall num : ";
        cin >> stalls[i];
    }
    int ans = stallsangek(stalls, count, k);

    cout << "The Final Answer is : " << ans << endl;
}