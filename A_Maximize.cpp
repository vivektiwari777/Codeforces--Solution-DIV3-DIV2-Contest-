#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int y = 1;
        int max_s = 0;
        for (int i = 1; i < x; i++)
        {
            int s = gcd(x, i) + i;
            if (s > max_s)
            {
                max_s = s;
                y = i;
            }
        }
        cout << y << endl;
    }
    return 0;
}
