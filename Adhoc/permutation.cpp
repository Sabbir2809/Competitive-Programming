/*
    Author : Sabbir Hossain
    Problem_Name : Permutation
*/
#include<bits/stdc++.h>
using namespace std;

// void stringPermutation(string s){

//     sort(s.begin(), s.end());

//     while(next_permutation(s.begin(), s.end())){
//         cout << s << " ";
//     }
//     cout << "\n";
// }

void print(vector<int> &v, int n){
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // string s;
    // cin >> s;
    // stringPermutation(s);

    int n;
    cin >> n;

    vector<int> v;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    while(next_permutation(v.begin(), v.end())){
        print(v, n);
    }

return 0;
}