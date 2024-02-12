//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
         const int Mod = 1000000007;
        long long num = 1, ans = 0;
        
        for(long long i=1; i<=n; i++) {
            long long product = 1;
            for(long long j=1; j<=i; j++) {
                product = (product % Mod * num) % Mod; 
                num++;
            }
            ans = (ans % Mod + product % Mod) % Mod;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends