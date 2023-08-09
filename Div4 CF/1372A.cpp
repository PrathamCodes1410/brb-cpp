#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cout << "Enter the number of testcases : ";
    cin >> t;

    for (long long i = 0; i < t; i++)
    {
        long long x;
        cout << "Enter x : ";
        cin >> x;

        long long y;
        cout << "Enter y : ";
        cin >> y;

        long long a;
        cout << "Enter a : ";
        cin >> a;

        long long b;
        cout << "Enter b : ";
        cin >> b; 


        long long dist1 = 0;
        if(x > 0){
            dist1 = x;
            cout << "Dist is : " << dist1 << endl;
        }
        else
        {
            dist1 = 0 - x;
            cout << "dist is : " << dist1 << endl;
        }

        long long dist2 = 0;
        if(y > 0){
            dist2 = y;
            cout << "dist2 is : " << dist2 << endl;
        }
        else{
            dist2 = 0 - y;
            cout << "dist2 is : " << dist2 << endl;
        }
        long long same = 0;
        long long smaller = 0;
        if(dist1 > dist2){
            same = dist1 - dist2;
            smaller = dist1;

            cout << "Larger number is : " << smaller << endl;
            cout << "Difference b/w them is : " << same << endl;
        }
        else{
            same = dist2 - dist1;
            smaller = dist2;
            cout << "Larger number is : " << smaller << endl;
            cout << "Difference b/w them is : " << same << endl;
        }

        long long CostA = same * a;
        cout << "Cost of A is : " << CostA << endl;
        long long CostB = (smaller - same) * b;
        cout << "Cost of B is : " << CostB << endl;

        long long finalCost = CostA + CostB;

        if(b < a){
            cout << "was here" << endl;
            long long shit = (dist1 + dist2) * b;

            if(shit < finalCost){
                finalCost = shit;
            }
        }

        cout << "Final Cost is : " << CostA + CostB << endl;
    }
}