#include <iostream>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    long long ans = 0;
    long long d = 0;

    int k = min(n, b);

    if (k == n)
    {
        for (int i = 0; i < n; i++)
        {
            ans += (b - i + 1);
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            d = d + (b - i + 1);
        }
        ans = ans + (n - k) * a + d;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
