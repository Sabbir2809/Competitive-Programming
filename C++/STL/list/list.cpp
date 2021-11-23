/*
    Author : Sabbir Hossain
    Problem_Name : list
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

    // 1. List Declaration
    list<int> l1;
    list<int> l2 = {10, 20, 30, 40, 50};
    list<int> l3 = {6, 9, 12, 15};

    // 2. push_back()
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    // 3. push_front()
    l1.push_front(4);
    l1.push_front(5);
    l1.push_front(6);

    // list print
    cout << "list: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << "\n";

    // 4. front()
    cout << "list front element: " << l1.front() << "\n";
    //5. back()
    cout << "list back element: " << l1.back() << "\n\n";

    // 6. pop_front()
    cout << "list size: " << l2.size() << "\n";

    l2.pop_front();
    l2.pop_front();

    cout << "pop front: ";
    for (auto it : l2){
        cout << it << " ";
    }
    cout << "\n";

    // 7. pop_back()
    l2.pop_back();
    l2.pop_back();

    cout << "pop back: ";
    for (auto it : l2){
        cout << it << " ";
    }
    cout << "\n";

    // 8. size()
    cout << "list size: " << l2.size() << "\n\n";

    // 9. clear()
    cout << "list elements: ";
    for (auto it : l1){
        cout << it << " ";
    }
    cout << "\n";

    cout << "list size: " << l1.size() << "\n";
    l1.clear();
    cout << "list size: " << l1.size() << "\n\n";

    // 10. empty()
    if (l1.empty()){
        cout << "list empty!";
    }else{
        cout << "Not empty list!";
    }
    cout << "\n\n";

    // 11. insert()
    list<int>::iterator it;
    it = l3.begin();
    advance(it, 0);

    l3.insert(it, 3, 3);

    cout << "list: ";
    for (auto it : l3){
        cout << it << " ";
    }
    
    // 12. erase()
    // 13. remove()
    // 14. reverse()
    // 15. sort()
    // 16. unique()
    // 17. swap()
    // 18. merge()

return 0;
}