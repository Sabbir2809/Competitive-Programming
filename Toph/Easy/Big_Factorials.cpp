/*
    Author: Sabbir Hossain
    Problem Name: Big Factorials
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i % 10000;
    }
    cout << fact << "\n";

return 0;
}