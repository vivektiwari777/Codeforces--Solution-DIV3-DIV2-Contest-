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
    int a, b, c;
    cin >> a >> b >> c;
    int c1 = 2 * b - c;
    int c2 = (a + c) / 2;
    int c3 = 2 * b - a;
    if (c1 >= a && c1 != 0 && c1 % a == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (c2 >= b && c2 != 0 && c2 % b == 0 && (c - a) % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    // int new_b = a + (c - a)/2;
    // if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
    //     cout << "YES\n";
    //     return;
    // }
    if (c3 >= c && c3 != 0 && c3 % c == 0)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
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
