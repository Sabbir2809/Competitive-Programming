/*
    Author: Sabbir Hossain
    Problem_Name: 2-D Prefix Sum.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[n][m];
    // Input Array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int prefixSum[n][m];
    prefixSum[0][0] = arr[0][0];
    // 1st row Prefix Sum Calculate
    for(int i = 1; i < m; i++){
        prefixSum[0][i] = prefixSum[0][i-1] + arr[0][i];
    }
    // 1st col Prefix Sum Calculate
    for(int i = 1; i < n; i++){
        prefixSum[i][0] = prefixSum[i-1][0] + arr[i][0];
    }
    // Rules
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            prefixSum[i][j] = prefixSum[i][j-1] + prefixSum[i-1][j] + arr[i][j] - prefixSum[i-1][j-1];
        }
    }
    // Print 2D Prefix Sum Array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << prefixSum[i][j] << " ";
        }
        cout << "\n";
    }
    
return 0;
}