//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        unordered_set<char> unique_chars(str.begin(), str.end());
        int required = unique_chars.size();

        unordered_map<char, int> window_count;
        int start = 0, min_len = INT_MAX;
        int formed = 0;

        for (int end = 0; end < str.length(); ++end) {
            window_count[str[end]]++;

            if (window_count[str[end]] == 1) {
                formed++;
            }

            // Try to shrink the window while it contains all unique characters
            while (formed == required) {
                min_len = min(min_len, end - start + 1);

                window_count[str[start]]--;
                if (window_count[str[start]] == 0) {
                    formed--;
                }
                start++;
            }
        }

        return min_len;
    }
};



//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends