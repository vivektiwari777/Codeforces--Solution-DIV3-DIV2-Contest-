#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 1e8;
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    long long sum1 = 0;
    sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {

        if (sum1 <= sum)
        {
            sum -= v[i];
            sum1 += v[i];
            cnt += 1;
        }
        else
        {
            break;
        }
    }
    cout << cnt;
    return 0;
}
