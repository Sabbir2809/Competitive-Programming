#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    string next;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> next;
        if (next[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}