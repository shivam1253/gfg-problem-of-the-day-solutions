//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int>ans;
        long long int n1=0;
        long long int n2=0;
        long long int m=0;
        for(int i=0; i<N; i++){
            m=m^Arr[i];
        }
        int c=0;
        while(m){
            if(m&1) break;
            else{
                c++;
                m=m>>1;
            }
        }
        for(long long int i=0; i<N; i++){
            if((Arr[i]>>c)&1) n1=n1^Arr[i];
            else n2=n2^Arr[i];
        }
      if(n1>n2){
          ans.push_back(n1);
          ans.push_back(n2);
      }
      else {
          ans.push_back(n2);
          ans.push_back(n1);
      }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends