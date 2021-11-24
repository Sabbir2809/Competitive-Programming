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
    list<int>::iterator it1;
    it1 = l3.begin();
    advance(it1, 0);

    l3.insert(it1, 3, 3);

    cout << "list: ";
    for (auto it1 : l3){
        cout << it1 << " ";
    }
    cout << "\n";

    // 12. erase()
    list<int>::iterator it2;
    it2 = l3.begin();
    advance(it2, 2);

    l3.erase(it2);

    cout << "erase element: ";
    for (auto it2 : l3){
        cout << it2 << " ";
    }
    cout << "\n";

    // 13. remove(value)
    l3.remove(3);
    cout << "remove element: ";
    for (auto it2 : l3){
        cout << it2 << " ";
    }
    cout << "\n";

    // 14. reverse()
    l3.reverse();

    cout << "reverse list: ";
    for (auto it2 : l3){
        cout << it2 << " ";
    }
    cout << "\n\n";

    // 15. sort()
    list<int> l4 = {1, 9, 2, 1, 5, 2, 8, 0, 9};

    l4.sort();

    cout << "sort list: ";
    for(auto it1 : l4){
        cout << it1 << " ";
    }
    cout << "\n";

    // 16. unique()
    l4.unique();

    cout << "unique list: ";
    for(auto it3 : l4){
        cout << it3 << " ";
    }
    cout << "\n\n";

    // 17. swap()
    list<int> l5 = {100, 200};
    list<int> l6 = {300, 400};

    l5.swap(l6);

    cout << "swap list l5: ";
    for(auto it4 : l5){
        cout << it4 << " ";
    }
    cout << "\n";
    cout << "swap list l6: ";
    for(auto it4 : l6){
        cout << it4 << " ";
    }
    cout << "\n";

    // 18. merge()
    l5.merge(l6);

    cout << "merge list l5: ";
    for(auto it4 : l5){
        cout << it4 << " ";
    }
    cout << "\n";


return 0;
}