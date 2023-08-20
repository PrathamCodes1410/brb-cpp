#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int bread = 0, cheese = 0, sausage = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'B'){
            bread++;
        }
        else if(s[i] == 'C'){
            cheese++;
        }
        else{
            sausage++;
        }
    }
    int nb, ns, nc;
    cin >> nb >> ns >> nc;

    int rb, rs, rc;
    cin >> rb >> rs >> rc;

    int r;
    cin >> r;

    int CostToMakeSingleHamburger = bread * rb + sausage * rs + cheese * rc;
    int bigger;
    if(nb > ns && nb > nc){
        bigger = nb;
    }
    if(ns > nb && ns > nc){
        bigger = ns;
    }
    if(nc > ns && nc > nb){
        bigger = nc;
    }

    while(true){

        

    }

}