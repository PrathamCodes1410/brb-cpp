#include <iostream>
using namespace std;

bool isPossible(int arr[], int count, int painters, int mid){
    int currentPainter = 0;
    int currentJob = 0;
    for (int i = 0; i < count; i++)
    {
        if(currentJob + arr[i] <= mid){
            currentJob += arr[i];
        }
        else{
            currentPainter++;
            if(currentPainter >= painters || arr[i] > mid){
                return false;
            }

            currentJob = arr[i];
            // current job = 0; redeclaring the variable
            // then then assigning that painter the current job which previous painter was not able to take
        }
    }

    return true;
    
}



int maxi(int arr[], int count, int max, int painters){
    int s = 0;
    int e =  max;  // this is our search space from s to e
    int ans = -1;
    int mid = (s + e)/2;

    while(s <= e){
        if(isPossible(arr, count, painters, mid)){
            ans = mid;
            e = mid - 1;

            cout << "This is current ans : " << ans << endl;
        }
        else{
            s = mid + 1;
        }

        mid = (s + e)/2;

        cout << "This is current mid : " << mid << endl;
    }

    return ans;

}


int main(){
    int count;
    cout << "Enter : ";
    cin >> count;
    int arr[25];
    int max = 0;
    for (int i = 0; i < count; i++)
    {
        cout << "Enter board size : ";
        cin >> arr[i];
        max += arr[i];
    }

    int painters;
    cout << "Enter the number of painters : ";
    cin >> painters;

    int ans = maxi(arr, count, max, painters);

    cout << "Ans is : " << ans << endl;
}