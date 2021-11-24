/*
    Author : Sabbir Hossain
    Problem_Name : Fibonacci Sequence
*/
#include<bits/stdc++.h>
using namespace std;
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ........
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ......
int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    cout << fib(n);
return 0;
}