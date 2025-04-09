//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int countSubstr(string& s, int k) {
        return atMostK(s, k) - atMostK(s, k - 1);
    }

  private:
    int atMostK(string& s, int k) {
        int n = s.size();
        unordered_map<char, int> mpp;
        int j = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
            while (mpp.size() > k) {
                mpp[s[j]]--;
                if (mpp[s[j]] == 0) mpp.erase(s[j]);
                j++;
            }
            ans += (i - j + 1);
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends