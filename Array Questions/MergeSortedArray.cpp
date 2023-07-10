// 88. Merge Sorted Array
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

auto merge(vector<int>& nums1, vector<int>& nums2, int m, int n){
    
    if(n == 0){
        return nums1;
    }

    //cout << "Printing num1 : ";
    cout << endl;
    cout << "printing the edited nums1 without the zeros : ";

    nums1.erase(nums1.begin() + m, nums1.end());

    //for(int i : nums1){
    //    cout << i << " ";
    //}

    cout << endl;
    cout << "Printing Nums2 : ";
    for(int i : nums2){
        cout << i << " ";
        nums1.push_back(i);
    }
    cout << endl;
    cout << "The Final Nums1 after the push back : ";
    sort(nums1.begin(), nums1.end());
    for(int i : nums1){
        cout << i << " ";
    }
    cout << endl;

    return nums1;

}



int main(){
    int count;
    int m;
    int n;
    vector<int> nums1;
    vector<int> nums2;

    cout << "Enter the size of your first array : ";
    cin >> count;

    cout << "Enter the M : ";
    cin >> m;

    cout << "Enter the size of second array : ";
    cin >> n;

    cout << "For the first array : "<< endl;
    for (int i = 0; i < count; i++)
    {
        int bla;
        cout << "Enter the number " << i + 1 << " : ";
        cin >> bla;
        nums1.push_back(bla);
    }

    cout << "For the second array : "<< endl;
    for (int i = 0; i < n; i++)
    {
        int bla;
        cout << "Enter the number " << i + 1 << " : ";
        cin >> bla;
        nums2.push_back(bla);
    }

    merge(nums1, nums2, m, n);
    
}





//You are given two integer arrays nums1 and nums2, 
//sorted in non-decreasing order, and two integers m and n, 
//representing the number of elements in nums1 and nums2 respectively.
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.
//The final sorted array should not be returned by the function, but instead be s
//tored inside the array nums1. To accommodate this, nums1 has a length of m + n, 
//where the first m elements denote the elements that should be merged, 
//and the last n elements are set to 0 and should be ignored. 
// nums2 has a length of n.