#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        
        int tilesInRows = ceil(n + k - 1) / k; // This is equivalent to ceil(n / k)
        int tilesInColumns =ceil (m + k - 1) / k; // This is equivalent to ceil(m / k)
        
        // The number of distinct colors needed
        int numberOfColors = tilesInRows * tilesInColumns;
        
        cout << numberOfColors << endl;
    }
    
    return 0;
}
