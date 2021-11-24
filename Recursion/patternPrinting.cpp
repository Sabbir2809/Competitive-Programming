/*
    Author : Sabbir Hossain
    Problem_Name : Pattern Printing.
*/
#include<bits/stdc++.h>
using namespace std;

void pattern_print(int n){
    if(n == 1){
        cout << 1 << "\n";
        return;
    }

    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << "\n";

    pattern_print(n - 1);
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    pattern_print(1);
return 0;
}