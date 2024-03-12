#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    string ans1 = "", ans2;
    int f = 0;
    int n = st.size();
    for (int i = 0; i < n; i++)
    {
        ans1 += st[i];
        ans2 = st.substr(i + 1, n - (i + 1));
        if (ans2[0] == '0')
            continue;
        else
        {
            if (stoi(ans1) < stoi(ans2))
            {
                f = 1;
                cout << ans1 << " " << ans2;
                break;
            }
        }
    }
    if (f == 0)
    {
        cout << -1;
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
