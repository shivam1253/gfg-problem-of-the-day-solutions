//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        int maxlen=0;
        int start=-1;
        int end=-1;
        unordered_map<int,int>mpp;
        int sum=0;
        for(int i=0,j=0; i<n; i++){
            sum+=arr[i];
            int target=sum;
            if(sum==0) maxlen=max(maxlen,i+1);
            if(mpp.find(sum)!=mpp.end()){
                int len=i-mpp[target];
                if(len>maxlen){
                    start=mpp[target];
                    end=i;
                    maxlen=len;
                }
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
            
        }
        return maxlen;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends