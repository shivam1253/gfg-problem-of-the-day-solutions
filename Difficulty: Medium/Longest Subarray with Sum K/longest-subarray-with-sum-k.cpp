//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>&arr, int k) {
         int n = arr.size();
        int curr_sum = 0, req_prefix_sum;
        int max_subarr_len = 0;
        unordered_map<int, int> prefix_sum;
        
        prefix_sum[0] = -1;
        for(int i=0; i<n; i++) {
            curr_sum += arr[i];
            if(prefix_sum.find(curr_sum - k) != prefix_sum.end()) {
                max_subarr_len = max(max_subarr_len, i - prefix_sum[curr_sum - k]);    
            } 
            
            if(prefix_sum.find(curr_sum)==prefix_sum.end()) {
                prefix_sum[curr_sum] = i;                
            } 
        }
        return max_subarr_len;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends