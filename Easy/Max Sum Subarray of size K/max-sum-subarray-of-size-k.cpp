//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &nums , int n){
       int i = 0;
        long long sum = 0; // Initialize sum to long long to handle large values
        long long p = 0; // Initialize p to 0
        int j = 0; // Initialize j
        while (j < nums.size()) {
            if (j - i + 1 < k) {
                sum += nums[j]; // Add current element to sum
                j++; // Move right pointer
            } else {
                sum += nums[j]; // Add current element to sum
                p = max(p, sum); // Update p with the maximum sum
                sum -= nums[i]; // Subtract element leaving the window
                i++; // Move left pointer
                j++; // Move right pointer
            }
        }
        return p;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends