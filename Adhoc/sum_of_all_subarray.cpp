/*
    Author : Sabbir Hossain
    Problem_Name : Sum of all Subarray of an Array
*/
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (i*(n-i+1)*arr[i]);
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    cout << solve(arr, n) << "\n";
    
return 0;
}