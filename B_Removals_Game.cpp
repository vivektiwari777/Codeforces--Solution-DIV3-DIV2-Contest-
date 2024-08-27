#include<bits/stdc++.h>

using namespace std;

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> alice(n);
        vector<int> bob(n);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; ++i) {
            cin >> alice[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> bob[i];
            mp[bob[i]] = i;
        }

        int left_alice = alice[0];
        int right_alice = alice[n - 1];
        
        int left_bob = mp[left_alice];
        int right_bob =mp[right_alice];

        if (left_bob < right_bob) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
