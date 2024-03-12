#include <iostream>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;

void solve()
{
    ll s = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
        a[i] = x;
    }

    if (s % 3 == 0)
        cout << 0 << endl;
    else if ((s % 3) == 2)
        cout << 1 << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 3 == 1)
            {
                cout << 1 << endl;
                return;
            }
            cout << 2 << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
