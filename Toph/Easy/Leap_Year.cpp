/*
    Author: Sabbir Hossain
    Problem_Name: Leap Years
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int year;
    cin >> year;

    if(((year % 4 == 0) && (year % 100 != 0))){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
return 0;
}