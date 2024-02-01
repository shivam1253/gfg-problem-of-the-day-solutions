//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        vector<int>ans(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-'a'>=0 and s[i]-'a'<26)
            ans[s[i]-'a']++;
            else if(s[i]-'A'>=0 and s[i]-'A'<26)
            ans[s[i]-'A']++;
        }
        for(auto i:ans)
        {
            if(i<1)
            return 0;
        }
        return 1;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends