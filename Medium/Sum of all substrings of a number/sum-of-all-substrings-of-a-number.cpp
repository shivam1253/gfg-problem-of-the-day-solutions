//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
         int n=s.size(),mod=1e9+7;
        long long sum=0, prev=1, ans=0; 
        for(int i=n-1;i>=0;i--){
            sum=(sum+prev)%mod;
            ans=(ans+(s[i]-'0')*sum%mod*(i+1)%mod)%mod;
            prev=prev*10%mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends