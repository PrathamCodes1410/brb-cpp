#include<iostream>
using namespace std;


int main(){

    int t;
    cin >> t;
    int count = 0;
    while(t--){

        string s;
        cin >> s;

        if(s == "Tetrahedron"){
            count = count + 4;
            continue;
        }
        else if(s == "Cube"){
            count = count + 6;
            continue;
        }
        else if(s == "Octahedron"){
            count = count + 8;
            continue;
        }
        else if(s == "Dodecahedron"){
            count = count + 12;
            continue;
        }
        else{
            count = count + 20;
        }
    }
    cout << count << endl;
}