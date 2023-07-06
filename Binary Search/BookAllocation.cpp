#include <iostream>
using namespace std;

bool isPossible(int arr[], int books, int students, int max, int mid){
    int studentCount = 0;
    int pageSum = 0;

    for (int i = 0; i < books; i++)
    {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount >= students || arr[i] > mid){
                return false;
            }

            pageSum = arr[i];
        }
    }

    return true;
    
}



int sol(int arr[], int books, int students, int max)
{
    int s = 0;
    int e = max;
    int ans = -1;
    int mid = (s + e) / 2;

    while(s <= e){
        if(isPossible(arr, books, students, max, mid)){
            ans = mid;
            e = mid - 1;
            cout << ans << endl;;
        }
        else{
            s = mid + 1;
        }

        mid = (s + e)/2;
    }

    return ans;

}

int main()
{
    int books;
    cout << "Enter the number of books : ";
    cin >> books;
    int students;
    cout << "Enter the number of students : ";
    cin >> students;

    int arr[25];
    int max = 0;
    for (int i = 0; i < books; i++)
    {
        cout << "Enter the pages in book no. " << i + 1 << " : ";
        cin >> arr[i];
        max = max + arr[i];
    }

    int results = sol(arr, books, students, max);

    cout << "Result is : " << results << endl;
}