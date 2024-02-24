#include <bits/stdc++.h>
using namespace std;

int cnt(string st)
{
    int len = 0;
    for (int i = 0; i < st.size() - 1; i++)
    {
        if (st[i] == st[i + 1])
        {
            len++;
            if (len >= 6)
            {
                cout << "YES";
                break;
            }
        }
        else
        {
            len = 0;
        }
    }
    cout << "NO";
}

int main()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int res = cnt(st);
    cout << res;
    return 0;
}
