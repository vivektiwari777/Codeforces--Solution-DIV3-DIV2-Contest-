#include <bits/stdc++.h>
using namespace std;

int len(string a, string b)
{
    int n = a.length();
    int m = b.length();
    int i = 0, j = 0;
    int cnt = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[i])
        {
            cnt++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        cout << len(a, b) << endl;
    }
    return 0;
}
