#include<iostream>
using namespace std;

int main(){

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int num; 
        cin >> num;

        if(num == 1){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
}