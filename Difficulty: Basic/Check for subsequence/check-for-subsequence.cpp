//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int p=0;
        int q=0;
        int n=B.size();
        while(q<n){
            if(A[p]==B[q]){
                p++;
                q++;
            }
            else q++;
            if(p==A.size()){
                break;
            }
        }
        return p==A.size();
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends