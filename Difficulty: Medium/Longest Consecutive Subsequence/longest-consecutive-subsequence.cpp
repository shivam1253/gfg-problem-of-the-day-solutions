//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        set<int>st;
        for(auto it:arr){
            st.insert(it);
        }
        vector<int>c;
        for(auto it:st){
            c.push_back(it);
        }
        arr=c;
        sort(arr.begin(),arr.end());
        int count=1;
        int x=arr[0];
        int ans=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==x+1){
                count++;
                x=arr[i];
            }
            else{
                count=1;
                x=arr[i];
            }
            ans=max(ans,count);
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
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends