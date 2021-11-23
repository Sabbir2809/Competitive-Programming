/*
    Author : Sabbir Hossain
    Problem_Name : Sum of digits of a Number.
*/
#include<bits/stdc++.h>
using namespace std;

int sum_digits(int n){
    if(n == 0){
        return 0;
    }
    int last_digit = n % 10;
    int remaining = n / 10;
    cout << remaining << " " << last_digit << "\n";
    return sum_digits(remaining) + last_digit;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cout << sum_digits(12143);
return 0;
}