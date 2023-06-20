#include <iostream>
using namespace std;

int main(){
    int a, b;
    char o;
    cout << "Enter the first number:: ";
    cin >> a;
    cout << endl;
    cout << "Enter the Operation:: ";
    cin >> o;
    cout << endl;
    cout << "Enter the second Number:: ";
    cin >> b;
    cout << endl;

    cout << "Your answer is::";
    switch (o)
    {
    case '*':
        cout << a * b << endl;
        break;
    
    case '/':
        cout << a / b << endl;
        break;

    case '+':
        cout << a + b << endl;
        break;
    
    case '-':
        cout << a - b << endl;
        break;
    
    default:
        cout << "This is not a valid Operation!";
        break;
    }
}