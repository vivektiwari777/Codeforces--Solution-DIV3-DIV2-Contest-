#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll f = 0;
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int t1 = 0, s1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            s1 += 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (t[i] == t[i + 1])
        {
            t1 += 1;
        }
    }
    if (t1 != 0 && s1 != 0)
    {
        cout << "No" << endl;
    }
    else if (s1 == 0 && t1 != 0)
    {
        cout << "Yes" << endl;
    }
    else if (s1 == 0 && t1 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {

                char el = s[i];

                if (el == t[0] || el == t[m - 1])
                {
                    f++;
                }
            }
        }
        if (f != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
