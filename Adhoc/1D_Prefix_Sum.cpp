/*
    Author : Sabbir Hossain
    Problem_Name : 1-D Prefix Sum.
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
    int pre[n+1];
    pre[0] = arr[0];

    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    int query;
    cin >> query;

    while(query--){
        int l, r;
        cin >> l >> r;

        if(l == 0){
            cout << pre[r] << endl;
        }else{
            cout << pre[r] - pre[l-1] << endl;
        }
    }
    
return 0;
}