//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool solve(vector<int>&v,int i,int target,int sum){
      if(target==sum){
          return 1;
      }
      
      if(i>=v.size() or sum>target) return 0;
      return solve(v,i+1,target-v[i],sum+v[i]) or solve(v,i+1,target,sum);
      
  }
    bool equalPartition(vector<int>& arr) {
        // code here
     int n=arr.size();
     int sum=0;
     for(auto it:arr){
         sum+=it;
     }
     if(sum%2) return 0;
     return solve(arr,0,sum,0);
     
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
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends