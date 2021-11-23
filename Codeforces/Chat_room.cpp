#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>> word;

    string s = "hello";
    int count1 = 0, count2 = 0;

    for(int i = 0; i < word.length(); i++){
        if(word[i] == s[count1]){
            count1++;
            count2++;
        }
    }
    if(count2 == 5){
        cout<< "YES";
    }else{
        cout<< "NO";
    }


return 0;
}

