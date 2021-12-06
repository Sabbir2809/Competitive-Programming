/*
    Author: Sabbir Hossain
    Problem_Name: Is Palindrome
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;

    string isPlindrome = word;
    reverse(word.begin(), word.end());

    if(word == isPlindrome){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
return 0;
}