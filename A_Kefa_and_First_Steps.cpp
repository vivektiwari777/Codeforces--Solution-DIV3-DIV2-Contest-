#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 1;
        }
    }

    cout << ans << endl;

    return 0;
}
