//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &h) {
        // code here
        vector<int>rm;
        vector<int>lm;
        int n=h.size();
        int x=0;
        for(int i=0; i<n; i++){
              x=max(x,h[i]);
             lm.push_back(x);
        }
        int p=0;
        for(int i=n-1; i>=0; i--){
           p=max(p,h[i]);
           rm.push_back(p);
        }
        reverse(rm.begin(),rm.end());
        int ans=0;
        for(int i=0; i<n; i++){
            ans+=min(rm[i],lm[i])-h[i];
        }
    return ans;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends