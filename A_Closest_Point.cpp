#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i];
        }
        // Calculate the maximum difference between consecutive points
        int maxDiff = 0;
        for (int i = 1; i < n; i++)
        {
            maxDiff = max(maxDiff, points[i] - points[i - 1]);
        }
        // Check if it is possible to add a new point
        if (maxDiff > 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
