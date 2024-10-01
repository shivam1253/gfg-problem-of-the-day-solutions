//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
//   void rotate(vector<int>&arr){
//       for(int i=arr.size()-1; i>0; i--){
//           swap(arr[i],arr[i-1]);
//       }
//   }
    int rotateDelete(vector<int> &arr) {
        int  k=1;
        while(arr.size()>1){
            arr.insert(arr.begin(),arr.back());
            arr.pop_back();
           if (k<arr.size()) {
    arr.erase(arr.begin() + (arr.size() - k));
}
        else arr.erase(arr.begin());
        k++;
        }
        return arr[0];
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
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends