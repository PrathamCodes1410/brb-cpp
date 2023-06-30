#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;


void sort(int arr[], int num){
    auto start = high_resolution_clock::now();
    int i = 0;
    int j = num - 1;

    while(i < j){
        //cout << "Heere";
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sorted in " << duration.count() << " Mircoseconds" << endl;
}



int main(){
    int num;

    cout << "Enter the length of the array you want : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your No. " << i + 1 << " : ";
        cin >> arr[i];

        if(arr[i] != 0 && arr[i] != 1){
            cout << endl;
            cout << "Please only enter one and zeros" << endl;

            cout << "Enter again your number : ";
            cin >> arr[i];
        }

    }

    sort(arr, num);

    for (int j = 0; j < num; j++)
    {
        cout << arr[j] << " ";
    }
    
}