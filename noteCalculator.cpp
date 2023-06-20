#include <iostream>
using namespace std;

int main(){
    cout << "Enter the amount needed to be exchanged:: ";
    int amount;
    cin >> amount;
    int current;
    int totalNotes;
    current = amount;
    if(current > 500){
        int fivezerozero;
        fivezerozero = (current - (current % 500)) / 500;
        current = current % 500;

        cout << "500 Notes --> " << fivezerozero;
        cout << endl;
    }
    if(current > 200){
        int twozerozero;
        twozerozero = (current - (current % 200)) / 200;
        current = current % 200;

        cout << "200 Notes --> " << twozerozero;
        cout << endl;
    }
    if(current > 100){
        int onezerozero;
        onezerozero = (current - (current % 100)) / 100;
        current = current % 100;

        cout << "100 Notes --> " << onezerozero;
        cout << endl;
    }
    if(current > 50){
        int fivezero;
        fivezero = (current - (current % 50)) / 50;
        current = current % 50;

        cout << "50 Notes --> " << fivezero;
        cout << endl;
    }
    if(current > 20){
        int twozero;
        twozero = (current - (current % 20)) / 20;
        current = current % 20;

        cout << "20 Notes --> " << twozero;
        cout << endl;
    }
    if(current > 10){
        int onezero;
        onezero = (current - (current % 10)) / 10;
        current = current % 10;

        cout << "10 Notes --> " << onezero;
        cout << endl;
    }
    if(current > 5){
        int five;
        five = (current - (current % 5)) / 5;
        current = current % 5;

        cout << "5 Notes --> " << five;
        cout << endl;
    }
    if(current != 0){
        cout << "Sorry we dont have any coins!";
        cout << endl;
        cout << "The remaining amount is:: ";
        cout << current << endl;
    }
    else{
        cout << "Thank you for using us! Avjo";
        cout << endl;
    }

}