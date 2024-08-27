#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x;
        cin >> x;
        deque<int> dq;

        if (x % 2 == 0)
        {
            cout << "-1";
        }
        else
        {
            dq.push_back(1);
            for (int i = 2; i <= x; i++)
            {
                if (i & 1)
                {
                    dq.push_front(i);
                }
                else
                {
                    dq.push_back(i);
                }
            }
        }
        int n = dq.size();
        vector<int> v;
        while (n--)
        {
            int a = dq.front();
            dq.pop_front();
            v.push_back(a);
        }

        for (auto &el : v)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}