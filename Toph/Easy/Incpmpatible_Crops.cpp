/*
    Author: Sabbir Hossain
    Problem_Name: Incompatible Crops
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int i, j, count = 0;
    char ch[n+1][n+1];
    int arr[n+1][n+1];

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cin >> ch[i][j];
            arr[i][j] = 1;
        }
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            if(ch[i][j] == '*'){
                arr[i][j] = 0;
                arr[i][j+1] = 0;
                arr[i][j-1] = 0;
                arr[i+1][j] = 0;
                arr[i-1][j] = 0;
            }
        }
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
    }
    cout << count << "\n";

return 0;
}