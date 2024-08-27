#include <bits/stdc++.h>
using namespace std;
string helper(int &a, int &b)
{

    int ans = min(a, b);
    if (ans % 2)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    helper(a, b);
    return 0;
}