#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findSubsets(vector<int> &a, int n, int k)
{
    vector<int> res;
    unordered_map<int, int> freq;

    // Count the frequency of each number in the array
    for (int num : a)
    {
        freq[num]++;
    }

    // Iterate through the array and find the subsets
    for (int num : a)
    {
        if (freq[num] > 0 && res.size() < 2 * k)
        {
            res.push_back(num);
            freq[num]--;
        }
    }

    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }

        vector<int> l = findSubsets(a, n, k);
        vector<int> r;

        // Find the remaining elements for r by excluding elements from l
        for (int num : a)
        {
            if (find(l.begin(), l.end(), num) == l.end() && r.size() < 2 * k)
            {
                r.push_back(num);
            }
        }

        // Output the results
        for (int i = 0; i < 2 * k; i++)
        {
            cout << l[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < 2 * k; i++)
        {
            cout << r[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
