#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i = 0;
    cin >> n;
    vector<int> v(7);
    for (i = 0; i < 7; i++)
        cin >> v[i];
    int s = v[0];
    while (s < n)
    {
        i++;
        i %= 7;
        s += v[i];
    }
    cout << (i + 1) % 7 << endl;
    return 0;
}