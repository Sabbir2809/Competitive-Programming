#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, b, count = 0;
    cin>> l>> b;
    
    while(1){
        count++;
        l *= 3;
        b *= 2;

        if(l > b){
            cout<< count;
            break;
        }
    }
return 0;
}