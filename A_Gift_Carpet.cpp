#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        string t = "vika";
        int k = 0;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i][j] == t[k])
                {
                    k++;
                    break;
                }
            }
            if (k >= 4)

                break;
        }
        if (k >= 4)

            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}
