#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int p = 0; p < n; p++)
    {
        cin >> v[p];
    }
    sort(v.begin(), v.end());

    map<pair<int, int>, int> absDiffMap; // Using a map to store absolute differences

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            absDiffMap[{i, j}] = abs(v[i] - v[j]);
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int ans = absDiffMap[{i, n - 1}] + absDiffMap[{i, n - 2}] + absDiffMap[{j, n - 1}] + absDiffMap[{j, n - 2}];
            cout << ans << endl;
            return; // Exit after the first combination
        }
    }
}
