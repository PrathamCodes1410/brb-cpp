#include <iostream>
using namespace std;

void search(int arr[], int size, int key)
{
    bool found = false;
    int s = 0;
    int e = size - 1;

    while (found == false)
    {
        //cout << "Current S : "<< s << endl;
        //cout << "Current E : "<< e << endl;
        int mid = (s + e) / 2;
        if (s > e || mid > e || mid < s)
        {
            cout << "Number is not present in the array or the array is not sorted" << endl;
            break;
        }

        //cout << "Current mid is : "<< mid << endl;

        if (arr[mid] == key)
        {
            found = true;
            cout << "Found and its Position is : " << mid << endl;
        }
        else if (arr[mid] > key)
        {
            s = 0;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            e = e;
        }
    }
}

int main()
{
    int num;

    cout << "Enter the size of your sorted array : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your no." << i + 1 << " : ";
        cin >> arr[i];
    }
    int key;
    cout << endl;
    cout << "Enter number to be found : ";
    cin >> key;

    search(arr, num, key);
}