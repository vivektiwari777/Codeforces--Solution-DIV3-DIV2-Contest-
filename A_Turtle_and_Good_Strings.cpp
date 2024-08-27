#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == s[n - 1])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
