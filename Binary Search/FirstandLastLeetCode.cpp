// 34. Find First and Last Position of Element in Sorted Array

// Medium Difficulty

//Given an array of integers nums sorted in non-decreasing order, 
//find the starting and ending position of a given target value.

//If target is not found in the array, return [-1, -1].

//You must write an algorithm with O(log n) runtime complexity.
#include <iostream>
using namespace std;

int Firstsort(int arr[], int num, int key){
    bool found = false;
    int s = 0;
    int e = num - 1;
    int ans = -1;
    while(s <= e){

        int mid =  (s + e)/2;
        //cout << mid << endl;
        if(s > e || mid > e || mid < s){
            return -1;
        }

        if(arr[mid] == key){
            //cout << s << endl;
            ans =  mid;
            e = mid - 1;
            //cout << s << endl;
            //break;
            cout << ans << endl;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid =  (s + e)/2;
    }


    return ans;
}


int Lastsort(int arr[], int num, int key){
    bool found = false;
    int s = 0;
    int e = num - 1;
    int ans = -1;
    while(s <= e){

        int mid =  (s + e)/2;
        //cout << mid << endl;
        if(s > e || mid > e || mid < s){
            return -1;
        }

        if(arr[mid] == key){
            //cout << s << endl;
            ans =  mid;
            s = mid + 1;
            //cout << s << endl;
            //break;
            //cout << ans << endl;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid =  (s + e)/2;
    }


    return ans;
}



int main(){
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

    int first = Firstsort(arr, num, key);
    cout << "First is : " << first << endl;
    int last = Lastsort(arr, num, key);
    cout << "Last is : " << last << endl;
}