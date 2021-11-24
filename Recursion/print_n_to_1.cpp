/*
    Author : Sabbir Hossain
    Problem_Name : Print n to 1 using recursion

*/
#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
typedef long long ll;
typedef unsigned long long ull;


void printNtoOne(int n){
    if(n == 1){ // Base Condition
        cout << n << " ";
        return;
    }
    cout << n << " "; // Induction
    printNtoOne(n - 1); // Hypothesis Design
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
/*  
    Recursion: Hypothesis Design, Induction (print), Base Condition 
*/  
    int n;
    cin >> n;

    printNtoOne(n); // Call Function

return 0;
}