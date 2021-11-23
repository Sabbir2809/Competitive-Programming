/*
    Author : Sabbir Hossain
    Problem_Name : Sum of Numbers from 1 to n.
*/
#include<bits/stdc++.h>
using namespace std;
// Very Important: base case, otherwise never stop
// Trust
// return 1 + 2 + 3 + ... + (n-1) + n
int sum_n(int n){
    if(n == 0){
        return 0;
    }
    int left_part = sum_n(n-1);
    return left_part + n;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cout << sum_n(10);
return 0;
}