/*
    Author: Sabbir Hossain
    Problem_Name: Pre-Computation Techniques Basics & Hashing
*/
#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
#define endl '\n';

const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

void solve(){

    fact[0] = fact[1] = 1;
    for(int i = 2; i < N; i++){
        fact[i] = fact[i-1] * i;
    }
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << fact[n] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();

return 0;
}