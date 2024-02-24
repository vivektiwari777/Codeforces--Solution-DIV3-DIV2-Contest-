#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v1;
        deque<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string st;
        cin >> st;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == 'L')
            {
                v1.push_back(a.front());
                a.pop_front();
            }
            else
            {
                v1.push_back(a.back());
                a.pop_back();
            }
        }
        reverse(v1.begin(), v1.end());
        vector<int> ans;
        int mul = 1;
        for (auto el : v1)
        {
            mul *= el;
            mul %= m;
            ans.push_back(mul);
        }
        reverse(ans.begin(), ans.end());
        for (auto &el : ans)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}