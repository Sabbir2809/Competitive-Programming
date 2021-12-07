/*
    Author: Sabbir Hossain
    Problem_Name: Better Passwords
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;

    char ch = word[0];
    if(ch == word[0]){
        ch = ch - 32;
        cout << ch;
    }else{
        cout << ch;
    }

    for(int i = 1; i < word.size(); i++){
        if(word[i] == 's'){
            cout << "$";
        }
        else if(word[i] == 'i'){
            cout << "!";
        }
        else if(word[i] == 'o'){
            cout << "()";
        }
        else if(word[i] == 's'){
            cout << "$";
        }
        else{
            cout << word[i];
        }
    }
    cout << "." << "\n";
    
return 0;
}