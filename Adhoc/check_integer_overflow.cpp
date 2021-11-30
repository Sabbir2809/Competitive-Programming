/*
    Author : Sabbir Hossain
    Problem_Name : Check if num1 * num2 is Greater than 10^18 avoiding integer overflow.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int num1, num2;
    long long int value = pow(10, 18);
    cin >> num1 >> num2;

    long long int ans = value / num1;

    if(num2 > ans){
        cout << "Overflow!";
    }else{
        cout << "Not Overflow!";
    }

return 0;
}