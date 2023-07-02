// 852. Peak Index in a Mountain Array
// medium
#include <iostream>
using namespace std;

void mountain(int arr[], int num){
    bool found = false;
    int s = 0;
    int e = num - 1;

    while(found == false){
        int mid = (s + e)/2;
        cout << "This si a test : " << mid << endl;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else if(arr[mid] < arr[mid - 1]){
            e = mid - 1;
        }
        else{
            cout << "Peak of this mountain array is : " << mid << endl;
            found = true;
            break;
        }
    }
}



int main(){
    int num;
    cout << "Enter : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter : ";
        cin >> arr[i];
    }

    mountain(arr, num);
    
}