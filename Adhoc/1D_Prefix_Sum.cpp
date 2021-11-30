/*
    Author: Sabbir Hossain
    Problem_Name: 1-D Prefix Sum.
    Time Compelexity: O(Q+N)
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
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int prefixSum[n+1];
    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    int query;
    cin >> query;

    while(query--){
        int l, r;
        cin >> l >> r;

        if(l == 0){
            cout << prefixSum[r] << endl;
        }else{
            cout << prefixSum[r] - prefixSum[l-1] << endl;
        }
    }
    
return 0;
}