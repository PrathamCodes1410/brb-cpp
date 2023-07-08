#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

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
    int n;
    cout << "Enter the N: ";
    cin >> n;
    cout << endl;
    cout << "Enter the R: ";
    cin >> r;
    auto start = high_resolution_clock::now();
    int first = factorial(r);
    int second = factorial(n);
    //cout << "This is the first factorial : " << first << endl;
    //cout << "This is the second factorial : " << second << endl;
    int third = factorial(n-r);
    //cout << "This is third one : " << third << endl;

    int finalAnswer = second / (first * third);

    cout << endl;

    cout << "Our Final Answer is ------> " << finalAnswer << endl;
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Duration was :: " << duration.count() << " microseconds" << endl;
}