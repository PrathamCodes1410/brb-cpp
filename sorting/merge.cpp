#include <iostream>
#include <bits/stdc++.h>
using namespace std;

auto sort(vector<int> v1, vector<int> v2)
{
    int i = 0;
    int j = 0;
    bool act = true;
    vector<int> r;
    while (j < v2.size()|| i < v1.size())
    {
        //cout << "Current v1 is : " << v1[i] << endl;
        //cout << "Current v2 is : " << v2[j] << endl;
        if (act == true)
        {
            if (v1.at(i) < v2.at(j))
            {
                //cout << "1" << endl;
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
                //cout << "2" << endl;
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
    }

    return r;
}



auto create(vector<int> & v, int s, int e){

    int mid = (s+e)/2;

    int first = mid + 1 - s;
    int sec = e - mid;
    
    // creating two arrays
    vector<int> v1;
    for (int i = s; i <= mid; i++)
    {
        v1.push_back(v[i]);
    }
    vector<int> v2;
    for (int i = mid + 1; i <= e; i++)
    {
        v2.push_back(v[i]);
    }

    vector<int> sortedPart = sort(v1, v2);

    vector<int> temp;
    int i = 0;
    while(i < v.size())
    {
        if(i == s){
            for(int j = 0; j < sortedPart.size(); j++)
            {
                temp.push_back(sortedPart[j]);
                i++;
            }
        }
        else{
            temp.push_back(v[i]);
            i++;
        }
    }
    
    v = temp;
}


int sort(vector<int> & v, int s = 0, int e = -1){

    if(e == -1){
        e = v.size() - 1;
    }

    if(s >= e){
        return 0;
    }

    int mid = (s+e) / 2;

    sort(v, 0, mid);
    sort(v, mid+1, e);
    create(v, s, e);
}


int main(){

    int count;
    cout << "Enter the size of your first array : ";
    cin >> count;

    vector<int> v;

    for (int i = 0; i < count; i++)
    {
        int num;
        cout << "Enter your no. " << i + 1 << " : ";
        cin >> num;

        v.push_back(num);
    }


    sort(v);

    cout << endl;

    cout << "After Sorting : ";
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

}