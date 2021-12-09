/*
    Author: Sabbir Hossain
    Problem_Name: Caesar Cipher
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    int p;
    for (int i = 0; i < s.length(); i++)
    {
        if (isspace(s[i]))
        {
            continue;
        }
        p = s[i] - n;
        if (p < 97)
        {
            p = p + 26;
        }
        s[i] = p;
    }
    cout << s << "\n";

    return 0;
}