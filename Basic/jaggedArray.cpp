#include<iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter the number of rows you want : ";
    cin >> rows;

    // arr double pointer stores 'rows' number of pointer, each pointer will have their own array
    int **arr = new int*[rows];

    // getting row length and creating an 2D array with some coloumns
    for (int i = 0; i < rows; i++)
    {
        int n;
        cout << "Enter length of the row : ";
        cin >> n;
        arr[i] = new int[n];

        for (int j = 0; j < n; j++)
        {
            arr[i][j];
        }
    }
}