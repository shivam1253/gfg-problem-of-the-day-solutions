//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        int n = arr.size();
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++) v.push_back({arr[i], i});
        sort(v.begin(), v.end());
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            while(v[i].first != arr[i])
            {
                cnt++;
                swap(v[i], v[v[i].second]);
            }
        }
        if(cnt == 0 || cnt == 2) return 1;
        return 0;
        // code here.
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends