/*
    Author : Sabbir Hossain
    Problem_Name : Print 1 to n using recursion

*/
#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
typedef long long ll;
typedef unsigned long long ull;


void printOneToN(int n){
    if(n == 0){ // Base Condition
        return;
    }
    printOneToN(n - 1); // Hypothesis Design
    cout << n << " "; // Induction
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

    printOneToN(n); // Call Function

return 0;
}