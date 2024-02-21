//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends

class Solution
{
    public:
    int mod = 1000000007;
    int ways(string &s, string &t, int &m, int &n, int i, int j, vector<vector<int>>& dp){
        if(i == n){
            return j == m;
        }
        else if(dp[i][j] != -1){
            return dp[i][j];
        }
        else{
            int ans = 0;
            if(j < m){
                if(s[i] == t[j]){
                    ans = (ans + ways(s, t, m, n, i+1, j+1, dp)) % mod;
                    ans = (ans + ways(s, t, m, n, i+1, j, dp)) % mod;
                }
                else{
                    ans = (ans + ways(s, t, m, n, i+1, j, dp)) % mod;
                }
            }
            else{
                ans = (ans + ways(s, t, m, n, i+1, j, dp)) % mod;
            }
            return dp[i][j] = ans;
        }
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      int n = s.size(), m = t.size();
      vector<vector<int>>dp(n, vector<int>(m+1, -1));
      return ways(s, t, m, n, 0, 0, dp);
    }
};


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends