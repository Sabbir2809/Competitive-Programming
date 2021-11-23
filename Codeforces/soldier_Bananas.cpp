#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin>> k>> n>> w;

    int sum = 0;
    for(int i = 1; i <= w; i++){
        sum = sum + i; 
    }
    int borrow = (sum * k) - n;

    if(borrow < 0){
        cout<< "0";
    }else{
        cout<< borrow ;
    }
return 0;
}