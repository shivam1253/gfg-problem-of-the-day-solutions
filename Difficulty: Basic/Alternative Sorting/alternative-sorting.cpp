//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0, j = n-1, k = 0;
        while(n--){
            if(k%2==0){
                ans.push_back(arr[j]);
                j--;
            }
            else{
                ans.push_back(arr[i]);
                i++;
            }
            k++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends