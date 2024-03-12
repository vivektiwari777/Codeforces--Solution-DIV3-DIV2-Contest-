#include <iostream>
#include <string>
#include <stack>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto ch : s)
    {
        if (islower(ch))
        {
            if (!st.empty() && islower(st.top()))
            {
                st.pop();
            }
            else
            {
                if (ch != 'b' && ch != 'B') // Changed || to &&
                {
                    st.push(ch);
                }
            }
        }
        else // Moved this else block to correct position
        {
            if (!st.empty() && isupper(st.top()))
            {
                st.pop();
            }
            else
            {
                if (ch != 'b' && ch != 'B') // Changed || to &&
                {
                    st.push(ch);
                }
            }
        }
    }
    string result = ""; // Removed extra space
    while (!st.empty()) // Changed condition from st.isempty() to !st.empty()
    {
        result = st.top() + result; // Fixed the order of characters
        st.pop();
    }
    cout << result << endl; // Moved cout outside of while loop
}

int main()
{
    solve();
    return 0;
}
