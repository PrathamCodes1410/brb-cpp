#include <iostream>
using namespace std;

int factorial(int num)
{

    int temp;
    int total;

    temp = num;
    total = 1;
    while (temp != 0)
    {
        total = total * temp; 
        temp = temp - 1;
    }

    //cout << total << endl;
    

    return total;
}

int main()
{
    int r;
    cout << "Enter the first number: ";
    cin >> r;
    int first = factorial(r);
    cout << "This is the first factorial : " << first;
    cout << "This is working" << endl;
}