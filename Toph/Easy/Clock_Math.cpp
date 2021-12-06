/*
    Author: Sabbir Hossain
    Problem_Name: Clock Math
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double H, M;
    cin >> H >> M;

    double angle = (0.5*11*M) - 30*H;

    if(angle < 0){
        angle = angle * (-1);
    }
    if(angle <= 100){
        cout << angle << "\n";
    }else{
        cout << 360 - angle << "\n";
    }
    
return 0;
}