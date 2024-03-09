//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
          string temp;
          temp=s;
        for(int i=0; i<r; i++){
            string ans;
           for(int j=0; j<temp.size(); j++){
               if(temp[j]=='1'){
                   ans+='1';
                   ans+='0';
               }
               else{
                   ans+='0';
                   ans+='1';
               }
               if(j==n) break;
           }
           temp=ans;
        }
        return temp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends