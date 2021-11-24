/*
    Author : Sabbir Hossain
    Problem_Name : vector - Dynamic Type Array
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

    // 1. vector Declaration
    vector<int> v1;
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v3 = {10, 20, 30, 40};

    // 2. push_back()
    v1.push_back(10); // v[0]
    v1.push_back(20); // v[1]
    v1.push_back(30); // v[2]
    v1.push_back(40); // v[3]
    v1.push_back(50); // v[4]

    // 3. How to print vector value (two way)
    cout << "Index of [1] Value- " << v1[1] << "\n";
    cout << "Index of [4] Value- " << v1.at(4) << "\n\n";
/*
    cout << v1.[5]; // Garbage Value
    cout << v1.at(5); // out_of_range (worning)
*/

    // 4. size()
    cout << "v1 vector size: " << v1.size() << "\n";

    cout << "v1 vector Elements: ";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << "\n\n";

    // 5. front()
    cout << "v1 vector front value- " << v1.front() << "\n";
    // 6. back()
    cout << "v1 vector back value- " << v1.back() << "\n\n";

    // 7. clear()
    cout << "Before clear v1 vector size: " << v1.size() << "\n";
    v1.clear();
    cout << "After clear v1 vector size: " << v1.size() << "\n\n";

    // 8. empty()
    if (v1.empty()){
        cout << "empty vector!";
    }else{
        cout << "Not empty vector!";
    }
    cout << "\n\n";

    // 9. pop_back()
    cout << "Before pop v2: ";
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n";

    v2.pop_back();
    v2.pop_back();

    cout << "After pop v2: ";
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n\n";

    // 10. erase()
    v2.erase(v2.begin()+3); // erase the value any position.

    cout << "v2 vector erase 2nd value: ";
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n\n";

    // 11. insert()
    cout << "Before Value insert v3: ";
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n";

    v3.insert(v3.begin()+2, 3, 50); // insert the value any position.

    cout << "After Value insert v3: ";
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n\n";

    // 12. swap()
    vector<int> v4 = {100, 200};
    vector<int> v5 = {300, 400};

    cout << "Before v4 swap: ";
    for (int i = 0; i < v4.size(); i++){
        cout << v4[i] << " ";
    }
    cout << "\n";

    swap(v4, v5);

    cout << "After v4 Swap: ";
    for (int i = 0; i < v4.size(); i++){
        cout << v4[i] << " ";
    }
    cout << "\n\n";

    // 13. sort()
    cout << "Before sort v3: ";
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n";

    sort(v3.begin(), v3.end());

    cout << "After sort v3: ";
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n\n";

    // 14. reverse()
    cout << "Before v3 reverse: ";
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n";

    reverse(v3.begin(), v3.end());

    cout << "After v3 reverse: ";
    for (int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n\n";

    // 15. iteration (Pointer- Time Complexity Minimize)
    vector<int> v6 = {1, 9, 2, 5, 8, 9};

    vector<int>::iterator it;
    it = v6.begin()+3;
    
    cout << *it << "\n";
    
    for (it = v6.begin(); it != v6.end(); it++){
        cout << *it << " ";
    }


return 0;
}