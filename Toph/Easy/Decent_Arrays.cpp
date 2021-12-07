/*
    Author: Sabbir Hossain
    Problem Name: Byang's Addtions
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
/*
    int n;
    cin >> n;

    int arr[n+1];
    int i;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(is_sorted(arr, arr+n)){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
*/
    int n;
    cin >> n;

    int arr[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int flag = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
return 0;
}