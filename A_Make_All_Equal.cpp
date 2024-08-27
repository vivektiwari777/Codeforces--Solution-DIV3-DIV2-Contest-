#include <bits/stdc++.h>

using namespace std;

bool comparePairs(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second; // comparing based on the second element of the pairs
}

int main()
{

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        int cnt = 0;

        vector<pair<int, int>> v(101, {0, 0}); // Assuming the range of el is from 0 to 100

        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            v[el].second++;
        }

        sort(v.begin(), v.end(), comparePairs);

        for (int i = 0; i < n - 1; i++)
        {
            cnt += v[i].second;
        }

        cout << cnt << endl;
    }

    return 0;
}
