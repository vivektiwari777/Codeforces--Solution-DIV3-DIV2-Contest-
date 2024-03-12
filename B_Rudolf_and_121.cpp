#include <iostream>

using namespace std;

bool canMakeZero(int arr[], int n)
{
    // Check if sum of all elements is odd.
    // If odd, it's impossible to make all zero.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum % 2 != 0)
    {
        return false;
    }

    // Check if any element is greater than n-1.
    // If yes, it's impossible to make all zero with this operation.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > n - 1)
        {
            return false;
        }
    }

    // Array is possible to make zero.
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (canMakeZero(arr, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
