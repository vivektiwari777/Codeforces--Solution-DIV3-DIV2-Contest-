#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i;
        for (i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                break;
            }
            cnt1++;
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (v[i] != 0)
            {
                break;
            }
            cnt2++;
        }
        for (i = cnt1; i < n - cnt2; i++)
        {
            if (v[i] == 0)
            {
                cnt3++;
            }
        }
        cout << cnt3 << endl;
    }
    return 0;
}
