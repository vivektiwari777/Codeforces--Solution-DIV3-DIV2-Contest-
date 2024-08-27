#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<int> a = {b[0]};
        for (int i = 1; i < n; i++)
        {
            if (b[i] < a.back())
            {
                a.push_back(1);
            }
            else
            {
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}