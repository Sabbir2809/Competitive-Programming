/*
    Author : Sabbir Hossain
    Problem_Name : Sort an array using recursion.
*/
#include<bits/stdc++.h>
using namespace std;

void inserts(vector<int> &v, int temp){
    if(v.size() == 0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();

    inserts(v, temp);
    v.push_back(val);
}

void arraySort(vector<int> &v){
    // Base Condition
    if(v.size() == 1){
        return;
    }
    // Hypothesis
    int temp = v[v.size()-1];
    v.pop_back();
    arraySort(v);
    // Induction
    inserts(v, temp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int t;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> t;
        v.push_back(t);
    }
    arraySort(v);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    
return 0;
}