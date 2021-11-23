#include<bits/stdc++.h>
using namespace std;

int main(){
    string w;
    cin>> w;

    int upperCase = 0, lowerCase = 0;
    for(int i = 0; i < w.length(); i++){
        if(isupper(w[i])){
            upperCase++;
        }else{
            lowerCase++;
        }
    }
    if(upperCase < lowerCase){
        for(int i = 0; i < w.length(); i++){
            w[i] = tolower(w[i]);
        }
        cout<< w <<endl;
    }
    if(upperCase > lowerCase){
        for(int i = 0; i < w.length(); i++){
            w[i] = toupper(w[i]);
        }
        cout<< w <<endl;
    }
    if(upperCase == lowerCase){
        for(int i = 0; i < w.length(); i++){
            w[i] = tolower(w[i]);
        }
        cout<< w <<endl;
    }
return 0;
}