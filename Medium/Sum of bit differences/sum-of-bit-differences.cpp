//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:
	long long sumBitDifferences(int arr[], int n) {
	    vector<int> v(20,0);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<20;j++){
	            if(arr[i]&(1<<j))
	                v[j]++;
	        }
	    }
	    long long ans=0;
	    for(int i=0;i<20;i++)
	        ans=ans+(v[i]*1ll)*(n-v[i]);
	    return ans*2ll;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends