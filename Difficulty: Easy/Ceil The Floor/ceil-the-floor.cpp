//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &v) {
        int n = v.size();
        int l = 0;
        int r = n - 1;
        int floor = -1;
        int ceil = -1;
        sort(v.begin(), v.end());

        while (l <= r) {
            int mid = (l + r) / 2;
            if (v[mid] == x) {
                floor = v[mid];
                ceil = v[mid];
                break;  // No need to search further as we found the exact match
            }
            else if (v[mid] > x) {
                ceil = v[mid];
                r = mid - 1;
            } 
            else if (v[mid] < x) {
                floor = v[mid];
                l = mid + 1;
            }
        }

        return {floor, ceil};
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends