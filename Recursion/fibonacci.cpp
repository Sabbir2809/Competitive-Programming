/*
    Author : Sabbir Hossain
    Problem_Name : Fibonacci Number
*/
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1){ // Base Condition
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Hypothesis Design
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int result = fibonacci(n);
    cout << result << "\n";

return 0;
}