#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& arr, vector<vector<int>> & visited, int x, int y, int n){

    if(x > n || y > n || visited[x][y] == 1 || x < 0 || y < 0){
        return false;
    }
    return true;

}



void solve(vector<string> & ans,vector<vector<int>>& arr, int n, int srcx, int srcy, vector<vector<int>> &visited, string path){

    if(srcx == n-1 && srcy == n-1){
        cout << "reached here and path is : " << path << endl;;
        ans.push_back(path);
        return;
    }
    // marking all the visited sites
    visited[srcx][srcy] = 1;

    // all the cases
    // UP, DOWN, LEFT, RIGHT
    cout << "Current path is : " << path << endl;
    cout << "Current dimension are : " << "x : " << srcx << " y : " << srcy << endl;
    // UP
    int newx = srcx;
    int newy = srcy - 1;
    if(isSafe(arr, visited, newx, newy, n)){
        if(arr[newx][newy] == 1){
        path.push_back('U');
        solve(ans, arr, n, newx, newy, visited, path);
        }
    }

    // DOWN
    newx = srcx;
    newy = srcy - 1;
    if(isSafe(arr, visited, newx, newy, n)){
        if(arr[newx][newy] == 1){
            path.push_back('D');
            solve(ans, arr, n, newx, newy, visited, path);
        }
    }

    // LEFT
    newx = srcx + 1;
    newy = srcy;
    if(isSafe(arr, visited, newx, newy, n)){
        if(arr[newx][newy] == 1){
        path.push_back('L');
        solve(ans, arr, n, newx, newy, visited, path);
        }
    }

    //RIGHT
    newx = srcx - 1;
    newy = srcy;
    if(isSafe(arr, visited, newx, newy, n)){
        if(arr[newx][newy] == 1){
            path.push_back('R');
            solve(ans, arr, n, newx, newy, visited, path);
            path.pop_back();
        }
    }
    // unmarking them
    visited[srcx][srcy] = 0;
}


vector<string> sol(vector<vector<int>>& arr, int n){

    int srcx = 0;
    int srcy = 0;
    vector<string> ans;
    vector<vector<int>> visited = arr;

    // initialising all the values with 0 in 2d vector visited
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            visited[i][j] = 0;
        }
    }
    
    string path = "";
    solve(ans, arr, n, srcx, srcy, visited, path);

    return ans;
}



int main(){

    int count;
    cout << "Enter the dimension of your maze : ";
    cin >> count;

    vector<int> v;
    vector<vector<int>> maze;

    for (int i = 0; i < count; i++)
    {
        for (int i = 0; i < count; i++)
        {
            int num;
            cout << "Enter your number : ";
            cin >> num;

            v.push_back(num);
        }
        cout << endl;
        maze.push_back(v);
        v.clear();
    }

    sol(maze, count);

}