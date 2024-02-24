#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, st1 = "";
    cin >> s;
    int f = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (f == 0)
            {
                f = 1;
                cout << " ";
            }
        }
        else
        {
            f = 0;
            cout << s[i];
        }
    }

    return 0;
}