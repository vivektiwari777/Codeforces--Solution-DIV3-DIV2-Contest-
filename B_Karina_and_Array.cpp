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
        vector<int> v(n);
        long long maxpro = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        if (n > 4)
        {
            v.erase(v.begin() + 2, v.end() - 2);
            n = 4;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                maxpro = max(maxpro, 1LL * v[i] * v[j]);
            }
        }

        cout << maxpro << endl;
    }
    return 0;
}
