#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int c1 = 0, c2 = 0;
        for (int i = 1; i <= s.size(); i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                c1 += 1;
            }
            else
            {
                c2 += 1;
            }
        }
        if (c1 == c2 || (c1 == 0 && c2 == 0))
        {
            cout << s << endl;
        }
        else
        {
            if (c1 > c2)
            {
                while (c1 - c2 >= 0)
                {
                    for (int i = 1; i <= s.size(); i++)
                    {
                        if (s[i] == 'a' && s[i + 1] == 'b')
                        {
                            ans +=
                        }
                    }
                }
            }
        }
    }
}