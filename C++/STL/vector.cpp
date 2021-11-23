/*
    Author : Sabbir Hossain
    Problem_Name : 
*/
#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /* ::::: vector - Dynamic Type Array ::::: */
    
    int a[1001] = {5, 10, 15, 20, 25};

    // 1. vector Declaration
    vector<int> v1;
    vector<int> v2 = {5, 10, 15, 20, 25};
    vector<int> v3 = {10, 20, 30, 40};

    // 2. push_back()
    v1.push_back(1); // v[0]
    v1.push_back(2); // v[1]
    v1.push_back(3); // v[2]
    v1.push_back(4); // v[3]
    v1.push_back(5); // v[4]

    // 3. How to print vector value
    cout << v1[1] << " ";
    cout << v1[2] << "\n";
/*
    cout << v1.[5]; // Garbage Value
    cout << v1.at(5); // out_of_range (worning)
*/
    cout << v1.at(3) << " ";
    cout << v1.at(4) << "\n";

    // 4. size()
    cout << "vector Size: " << v1.size() << "\n";

    cout << "vector Elements: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << "\n";
    
    // 5. front()
    cout << v1.front() << " ";

    // 6. back()
    cout << v1.back() << "\n";

    // 7. clear()
    cout << "Before Clear vector Size: " << v1.size() << "\n";
    v1.clear(); // Size 0
    cout << "After Clear vector Size: " << v1.size() << "\n";

    // 8. empty()
    if(v1.empty()){
        cout << "Empty!" << "\n";
    }else{
        cout << "Not Empty!" << "\n";
    }

    // 9. pop_back()
    v2.pop_back();
    v2.pop_back();

    cout << "vector Elements: ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n";

    // 10. erase()
    v2.erase(v2.begin()+0);

    cout << "vector Elements Delete: ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n";

    // 11. insert()
    
    // 12. swap()
    // 13. sort()
    // 14. reverse()
    // 15. iteration
return 0;
}