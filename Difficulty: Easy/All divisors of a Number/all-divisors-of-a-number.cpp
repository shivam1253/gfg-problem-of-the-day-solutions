//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        int p=n;
      for(int i=1; i<sqrt(p); i++){
          if(n%i==0){
              cout<<i<<" ";
          }
      }
      for(int i=sqrt(p); i>=1; i--){
          if(n%i==0){
              cout<<n/i<<" ";
          }
      }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends