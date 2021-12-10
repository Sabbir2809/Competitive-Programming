/*
    Author: Sabbir Hossain
    Problem_Name: Print Count of that Number in array.(Hashing)
*/
#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
#define endl '\n';

const int N = 1e7+10;
int has[N];
void solve(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        has[a[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;

        int count = 0;
        cout << has[x] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();

return 0;
}