#include <iostream>
using namespace std;


void twoSum(int arr[], int size, int sum){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j != i){
                if(arr[i] + arr[j] == sum){
                    cout << arr[i] << " & " << arr[j] << " ";
                    arr[i] = sum + 1;
                    arr[j] = sum + 1;
                }
            }
        }
    } 
}




int main(){
    int num;
    cout << "Enter the length of your Array : ";
    cin >> num;

    int arr[25];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter your No." << i + 1 << " : ";
        cin >> arr[i];
    }
    int sum;
    cout << "Enter your sum now : ";
    cin >> sum;

    twoSum(arr, num, sum);

}