//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
        // code here
         int n = nums.size();
        int idx = -1;
        for(int i = 0; i < n-1; i++) {
          if(nums[i]<nums[i+1]) idx = i;
        }
        if(idx == -1) {
          reverse(nums.begin(), nums.end());
          return;
        }
        int l = idx + 1;
        for(int i = idx + 1; i < n; i++) {
            if(nums[i] > nums[idx]) l = i;
        }
        swap(nums[idx], nums[l]);
        reverse(nums.begin() + 1 + idx, nums.end());
        return;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends