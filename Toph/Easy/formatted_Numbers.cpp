/*
    Author: Sabbir Hossain
    Problem_Name: Formatted Numbers
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    reverse(str.begin(), str.end());

    string comma = "";
    int count = 0;

    for(int i = 0; i < str.size(); i++){
        if(count == 3){
            comma = comma + ",";
            comma = comma + str[i];
            count = 0;
        }else{
            comma = comma + str[i];
        }
        count++;
    }

    reverse(comma.begin(), comma.end());
    cout << comma << "\n";
    
return 0;
}