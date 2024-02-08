//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int>v(26,0);
	    for(int i=0;i<pat.size();i++){
	        v[pat[i]-'a']++;
	    }
	    int ans = 0;
	    int k = pat.size();
	    vector<int>a(26,0);
	    for(int i=0;i<(int)txt.size();i++){
            a[txt[i]-'a']++;
            if(i>=k-1){
                if(a==v){
                    ans++;
                }
                a[txt[i-k+1]-'a']--;
            }
        }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends