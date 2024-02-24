#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int totalDiagonals = 4 * n - 2;
        int uncoloredDiagonals = totalDiagonals - k;
        int minColoredCells = uncoloredDiagonals / 2;

        cout << minColoredCells << endl;
    }

    return 0;
}
