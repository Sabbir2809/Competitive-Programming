/*
    Author : Sabbir Hossain
    Problem_Name : Sum of digits of a Number.
*/
#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n){
    if(n == 0){
        return 0;
    }
    int last_digit = n % 10;
    int remaining = n / 10;

    cout << remaining << " " << last_digit << "\n"; 
    return sumOfDigit(remaining) + last_digit;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    int result = sumOfDigit(n);
    cout << result << "\n";
    
return 0;
}