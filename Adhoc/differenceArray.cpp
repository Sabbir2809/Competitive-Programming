/*
    Author : Sabbir Hossain
    Problem_Name : Difference Array technique
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n+1];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    int diffArray[n+2] = {0};

    int query;
    cin >> query;

    int left, right, value;
    while(query--){
        cin >> left >> right >> value;

        diffArray[left] += value;
        diffArray[right+1] -= value;
    }
    // Prefix Sum Array
    for(int i = 1; i < n; i++){
        diffArray[i] += diffArray[i-1];
    }
    // Array and Prefix Sum Array Addition
    for(int i = 0; i < n; i++){
        arr[i] += diffArray[i];
    }
    // Print Array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

return 0;
}