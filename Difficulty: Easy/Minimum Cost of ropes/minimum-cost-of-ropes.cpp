//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
        for(auto it:arr){
            pq.push(it);
        }
       long long int ans=0;
        while(pq.size()>1){
            if(pq.size()==1) return pq.top();
            int p=pq.top();
            pq.pop();
            int q=pq.top();
            pq.pop();
            ans+=p+q;
            pq.push(p+q);
        }
        return ans;
        // Your code here
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends