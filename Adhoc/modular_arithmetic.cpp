/*
    Author: Sabbir Hossain
    Problem_Name: Given a Number N. Print its Factorial. Constraints (1 <= N <= 100). Print answer module M where M = 47
*/
#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
#define endl '\n';

void solve(){
    // 1. (a + b) % M = ((a % M) + (b % M)) % M
    // 2. (a * b) % M = ((a % M) * (b % M)) % M
    // 3. (a - b) % M = ((a % M) - (b % M) + M) % M
    // 4. (a / b) % M = ((a % M) * (b^-1) % M) % M
    int n;
    cin >> n;

    int M = 47;
    long long fact = 1;
    for(int i = 2; i <= n; i++){
        fact = (fact * i) % M;
    }
    cout << fact << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();

return 0;
}