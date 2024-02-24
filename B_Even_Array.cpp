#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n); // Initialize the vector after inputting the value of n
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int odd = 0, even = 0, fine = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                {
                    fine++;
                }
                else
                {
                    even++;
                }
            }
            else
            {
                if (a[i] % 2 == 1)
                {
                    fine++;
                }
                else
                {
                    odd++;
                }
            }
        }
        if (fine == n)
        {
            cout << 0 << endl;
        }
        else if (even == odd)
        {
            cout << even << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}