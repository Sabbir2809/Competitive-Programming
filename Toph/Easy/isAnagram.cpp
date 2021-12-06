/*
    Author: Sabbir Hossain
    Problem_Name: Is Anagram
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string w1, w2;
    cin >> w1 >> w2;

    sort(w1.begin(), w1.end());
    sort(w2.begin(), w2.end());

    if(w1 == w2){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
return 0;
}