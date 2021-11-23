#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n >> k;
    
    while(k){
        if(n % 10 == 0){
            n = n / 10;
            k--;
        }else{
            n = n - 1;
            k--;
        }
    }
    cout<< n;

return 0;
}