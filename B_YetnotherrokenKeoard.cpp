#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
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

        int result;
        if (max_freq > n / 2)
        {
            result = n - 2 * (n - max_freq);
        }
        else
        {
            if (n % 2 == 1)
            {
                result = 1;
            }
            else
            {
                result = n - 2 * max_freq;
            }
        }

        cout << result << endl;
    }
}
