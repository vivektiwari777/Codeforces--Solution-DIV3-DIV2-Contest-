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
    int k, q;
    cin >> k >> q;
    vector<int> v1(k);
    vector<int> v2(q);
    vector<int> res; // Removing the initial size declaration since we will use push_back to add elements
    for (int i = 0; i < k; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> v2[i];
    }
    int el = *min_element(v1.begin(), v1.end());
    for (int i = 0; i < q; i++) // Fixing the loop to start from 0
    {
        if (el > v2[i]) // Changed the comparison operator
        {
            res.push_back(v2[i]); // Adding v2[i] to res
        }
        else
        {
            res.push_back(el - 1); // Adding el to res
        }
    }
    for (int i = 0; i < res.size(); i++) // Changed the loop to start from 0
    {
        cout << res[i] << " ";
    }
    cout << endl;
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
