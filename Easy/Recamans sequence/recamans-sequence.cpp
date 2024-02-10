//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int> ans;
        unordered_set<int> set;
        
        if(n<0)
            return ans;
        
        ans.push_back(0);
        for(int i=1; i<n; i++){
            int cal = ans[ans.size() -1] - i;
            if(cal > 0 && set.find(cal) == set.end()){
                ans.push_back(cal);
            }
            else{
                cal = cal + 2*i;
                ans.push_back(cal);
            }
            set.insert(cal);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends