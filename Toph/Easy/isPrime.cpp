/*
    Author: Sabbir Hossain
    Problem_Name: Is Prime

*/
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int ans = isPrime(n);

    if(ans == true){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
return 0;
}