//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        vector<long long int>ans;
        vector<long long int>ps;
        vector<long long int>pts;
        ps.push_back(1);
        pts.push_back(1);
        for(auto it:nums){
            ps.push_back(ps.back()*it);
        }
        ps.push_back(1);
        for(int i=nums.size()-1; i>=0; i--){
            pts.push_back(pts.back()*nums[i]);
        }
        pts.push_back(1);
        reverse(pts.begin(),pts.end());
        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            ans.push_back(ps[j-1]*pts[j+1]);
        }
  return ans;
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends