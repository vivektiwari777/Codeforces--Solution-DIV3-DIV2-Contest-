#include <bits/stdc++.h>
using namespace std; // Fixed typo here

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int timeneed = 0;
        int maxent = -1, bestIndex = -1;
        for (int i = 0; i < n; i++)
        {
            timeneed = a[i] + i;
            if (timeneed <= s)
            {
                if (b[i] > maxent)
                {
                    maxent = b[i];
                    bestIndex = i + 1;
                }
            }
        }

        cout << bestIndex << endl;
    }
    return 0;
}
