#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, m;
        cin >> n >> m;

        bool v = false;
        bool i = false;
        bool k = false;
        bool a = false;

        vector<char> vec;
        vector<vector<char>> mat;



        for (int l = 0; l < n; l++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                vec.push_back(c);
            }
            //cout << "here" << endl;
            mat.push_back(vec);
            vec.clear();
        }
        //cout << "khatam" << endl;
        
       

        for (int l = 0; l < m; l++)
        {
            int z = 0;
            while(z < n){
                char c = mat[z][l];
                if(v == false){
                    if(c == 'v'){
                        v = true;
                        break;
                    }
                }
                if(v == true && i != true){
                    if(c == 'i'){
                        i = true;
                        break;
                    }
                }
                if(i == true && k != true){
                    if(c == 'k'){
                        k = true;
                        break;
                    }
                }
                if(k == true && a != true){
                    if(c == 'a'){
                        a = true;
                        break;
                    }
                }
                z++;
            }
        }
        if(v == true && i == true && k == true && a == true)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}