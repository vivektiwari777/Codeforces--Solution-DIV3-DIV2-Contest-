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

    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;

    for (auto ch : s)
    {
        mp[ch]++;
    }

    int max_freq = 0;
    for (auto el : mp)
    {
        max_freq = max(max_freq, el.second);
    }
    // if (mp.count(max_freq) == 2)
    // {
    //     max_freq = 2 * max_freq;
    // }
    if (mp.find(max_freq) != mp.end())
    {
        max_freq = 2 * max_freq;
    }

    int result = 0;
    if (max_freq >= ceil(n / 2))
    {
        result = 2 * max_freq - n;
    }
    else if (max_freq == 1 && n % 2 != 0)
    {
        result = 1;
    }
    else if (max_freq == 1 && n % 2 == 0)
    {
        result = 0;
    }
    else
    {
        result = n - 2 * max_freq;
    }

    cout << result << endl;
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
