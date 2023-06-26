#include <iostream>
using namespace std;


void duplicate(int arr[], int size){


    for (int i = 0; i < size; i++)
    {
        int score = 0;
        for (int j = 0; j < size; j++)
        {
            if(j != i){
                if(arr[i] == arr[j]){
                    score = 1;
                    break;
                }
            }
        }

        if(score == 1){
            cout << arr[i] << " ";
        }
        
    }
    

}


int main(){
    int num;
    cout << "Enter the Length of your array : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the Number : ";
        cin >> arr[i];
    }

    duplicate(arr, num);
    
}