#include <iostream>
using namespace std;


int sum(int arr[], int size, int ans = 0){

    cout << "Current ans is : " << ans << endl;
    if(size == 0){
        return ans;
    }
    else {
        ans = ans + arr[0];
        return sum(arr+1, size - 1, ans);
    }
}


int main(){

    int size;
    cout << "Enter the size of your array : ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter your no. " << i + 1 << " : ";
        cin >> arr[i];
    }
    
    cout << "ans is : " << sum(arr, size) << endl;

    delete []arr;
}