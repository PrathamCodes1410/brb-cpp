#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkArray(int count1[26], int count2[26]){
    for (int i = 0; i < 26; i++)
    {
        cout << "Checking!" << endl;
        if(count1[i] != count2[i]){
            return false;
        }
    }
    
    return true;
}


bool check(string s1, string s2){

    int len1 = s1.length();  // windowSize
    int len2 = s2.length();
    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    
    for (int i = 0; i < len2 - len1 + 1; i++)
    {
        int j = 0;
        while(j < len1){
            int index = s2[i + j] - 'a';
            count2[index]++;
            j++;
        }

        if(checkArray(count1, count2)){
            return true;
        }
    }
    
    return false;
   
}


int main(){

    string s1;
    string s2;

    cout << "Enter your string 1 : ";
    getline(cin, s1);
    cout << "Enter your string 2 : ";
    getline(cin, s2);

    bool ans = check(s1, s2);
    cout << "Does it exist : " << ans << endl;

}