/*
    Author : Sabbir Hossain
    Problem_Name : Sum of Numbers from 1 to n.
*/
#include<bits/stdc++.h>
using namespace std;

int sumOfNumber(int n){
    if(n == 0){
        return 0;
    }
    int left_part = sumOfNumber(n-1);
    return left_part + n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    cout << sumOfNumber(n) << "\n";
    
return 0;
}