#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count= 0;
    int arr[100];
    cin>> n>> k;

    int i;
    for(i = 0; i < n; i++){
        cin>> arr[i];
    }
    for(i = 0; i < n; i++){
        if(arr[i] > 0 && arr[i] >= arr[k-1]){
            count++;
        }
    }
    cout<< count<< endl;

return 0;
}
