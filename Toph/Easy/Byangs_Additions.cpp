/*
    Author: Sabbir Hossain
    Problem Name: Byang's Addtions
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, num2;
    cin >> num1 >> num2;

    int flag = 0;
    while(num1 > 0 && num2 > 0){
        int remainder1 = num1 % 10;
        num1 = num1 / 10;
        int remainder2 = num2 % 10;
        num2 = num2 / 10;

        if(remainder1 + remainder2 > 9){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
return 0;
}