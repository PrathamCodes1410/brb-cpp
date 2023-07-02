#include <iostream>
using namespace std;

int sol(int arr[], int books, int students, int max)
{
    
}

int main()
{
    int books;
    cout << "Enter the number of books : ";
    cin >> books;
    int students;
    cout << "Enter the number of students : ";
    cin >> students;

    int arr[25];
    int max = 0;
    for (int i = 0; i < books; i++)
    {
        cout << "Enter the pages in book no. " << i + 1 << " : ";
        cin >> arr[i];
        max = max + arr[i];
    }

    int results = sol(arr, books, students, max);

    cout << "Result is : " << results << endl;
}