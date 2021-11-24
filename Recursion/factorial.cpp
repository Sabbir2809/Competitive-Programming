/*
    Author : Sabbir Hossain
    Problem_Name : Factorial Number using Recursion
*/
#include<bits/stdc++.h>
using namespace std;

int factorial(long long n){
    if(n == 0){ // Base Condition
        return 1;
    }
    return n * factorial(n - 1); // Hypothesis Design, Induction
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
/*  
    Recursion: Hypothesis Design, Induction (print), Base Condition 
*/  
    long long n;
    cin >> n;

    long long ans = factorial(n);
    cout << ans << "\n";

return 0;
}