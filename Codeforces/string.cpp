#include<bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    cin>> x>> y;
    for(int i = 0; i < x.size(); i++){
        x[i] = towlower(x[i]);
        y[i] = towlower(y[i]);
    }
    if(x == y){
        cout<< "0" <<endl;
    }
    else{
        for(int i = 0; i < x.size(); i++){
            
            if(x[i] < y[i]){
                cout<< "-1" <<endl;
                break;
            }
            if(x[i] > y[i]){
                cout<< "1" <<endl;
                break;
            }
        }
    }
return 0;
}