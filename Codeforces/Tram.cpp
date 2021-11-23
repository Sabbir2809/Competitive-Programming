#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    int a, b, sum = 0, count = 0;
    for(int i = 0; i < t; i++){
        cin>> a>> b;
        sum = (a + count) - b;

        if(sum < 0){
            count = 0;
        }else{
            count = sum;
        }
    }
    cout << sum;
return 0;
}

