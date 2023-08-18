#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 != 0){
            if(b == 0){
                //cout << "changed to 1" << endl;
                b = 1;
            }
            else if(b == 1){
                //cout << "changed to 0" << endl;
                b = 0;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if(i % 2 == 0){
                cout << '#';
            }
            else{
                //cout << "current b is : " << b << endl;
                if(b == 0){
                   if(j == m - 1){
                        cout << '#';
                    }
                    else{
                        cout << '.';
                    }
                }
                else{
                    if(j == 0){
                        cout << '#';
                    }
                    else{
                        cout << '.';
                    }
                }
            }
        }
        cout << endl;
    }
}