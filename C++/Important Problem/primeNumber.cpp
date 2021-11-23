#include<bits/stdc++.h>
using namespace std;

int primeCheck(int n){ // O(sqrt(N))
    if( n == 1){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int composite[100005];

void sieve(int N){
    composite[1] = 1;
    for(int i = 2; i*i <= N; i++){
        if(composite[i] == 0){
            for(int j = i*i; j <= N; j = j+i){
                composite[j] = 1;
            }
        }
    }

    for(int i = 2; i <= N; i++){
        if(composite[i] == 0){
            cout << i << endl;
        }
    }
}
int main(){
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++){  // O(N * sqrt(N)) ---> O(N * log2 (N))
    //     if(primeCheck(i) == 1) cout << i << endl;
    // }
    sieve(100);
return 0;
}