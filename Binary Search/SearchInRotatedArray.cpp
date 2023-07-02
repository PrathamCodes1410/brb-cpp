// 33. Search in Rotated Sorted Array
// Medium
// Microsoft
#include <iostream>
using namespace std;

void search(int arr[], int num, int pivot, int target){
    int s1 = 0;
    int e1 = pivot - 1;
    int s2 = pivot;
    int e2 = num - 1;

    if(target > arr[e2]){ // this means if target is above 2nd line
        while(s1 <= e1){
            int mid = (s1 + e1) / 2;
            if(arr[mid] == target){
                cout << "Position is : " << mid << endl;
                break;
            }
            if(arr[mid] < target){
                s1 = mid + 1;
            }
            else if(arr[mid] > target){
                e1 =  mid - 1;
            }
        }
    }
    else{  // It means target is in second line
        while(s2 <= e2){
            int mid = (s2 + e2) / 2;
            if(arr[mid] == target){
                cout << "Position is : " << mid << endl;
                break;
            }
            if(arr[mid] < target){
                s2 = mid + 1;
            }
            else if(arr[mid] > target){
                e2 =  mid - 1;
            }
        }
    }

    cout << -1 << endl;
}


int pivot(int arr[], int num){
    int s = 0;
    int e = num - 1;
    while (s < e)
    {
        int mid =  (s + e)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }

    return s;
}

int main(){
    int num;
    cout << "Enter size : ";
    cin >> num;
    int arr[25];
    for (int i = 0; i < num; i++)
    {   
        cout << "Enter : "; 
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target : ";
    cin >> target;
    int p = pivot(arr, num);
    cout << "Here pviuot is : " << p;
    search(arr, num, p, target);
    
}