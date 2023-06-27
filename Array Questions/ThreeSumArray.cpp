#include <iostream>
using namespace std;

void threesome(int arr[], int size, int sum)
{

    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if (arr[i] != arr[j])
            {
                for (int k = j + 1; k < size; k++)
                {
                    if (arr[j] != arr[k] && arr[i] != arr[k])
                    {
                        if(arr[i] + arr[j] + arr[k] == sum){
                            cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int num;
    cout << "Enter Length of your array : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your number : " << i + 1 << " : ";
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the sum you want : ";
    cin >> sum;

    threesome(arr, num, sum);
}