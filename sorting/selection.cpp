#include <iostream>
using namespace std;

void sort(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        // cout << "This is I : " << i << endl;
        int temp = INT16_MAX;
        int another_temp = 0;
        for (int j = i + 1; j <= count; j++)
        {
            // cout << "This is J : " << j << endl;

            if (arr[j] < temp)
            {
                temp = arr[j];
                another_temp = j;
            }
        }

        if (temp < arr[i])
        {   
            swap(arr[i], temp);
            swap(arr[another_temp], temp);
            //cout << "Swaped : " << arr[i] << " and " << temp << endl;
        }

    }

    for (int i = 0; i < count; i++)
    {
        cout << " Final order is : " << arr[i] << endl;
    }
}

int main()
{
    int count;
    cout << "Enter the number of elements you want in the array : ";
    cin >> count;
    int arr[20];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the no." << i + 1 << " : ";
        cin >> arr[i];
    }

    sort(arr, count);
}