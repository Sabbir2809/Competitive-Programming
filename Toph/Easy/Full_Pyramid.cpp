/*
    Author: Sabbir Hossain
    Problem Name: Full Pyramid
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int space = 1; space <= n-i; space++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(i == j){
                cout << "*";
            }else{
                cout << "* ";
            }
        }
        cout << "\n";
    }

return 0;
}