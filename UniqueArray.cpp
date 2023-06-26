#include <iostream>
using namespace std;

void unique(int arr[], int size){

    //int temp[15];
    int temp;

    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        int score = 0;

        for (int j = 0; j < size; j++)
        {
            if(j != i){
                //cout << "reached here" << endl;
                if(arr[j] == arr[i]){
                    score = 1;
                }
            }
        }

        if(score == 0){
            cout << arr[i] << " ";
        }
    }
}


int main(){
    int num;
    cout << "Enter length of your array : ";
    cin >> num;

    int arr[15];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the no." << i+1 << " : ";
        cin >> arr[i];
    }
    
    unique(arr, num);
}