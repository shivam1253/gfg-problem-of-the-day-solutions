//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
          map<int , int> mpp ;
        int count1 = 0 , el1 = INT_MIN ;
        int count2 = 0 , el2 = INT_MIN ;
        int n=nums.size();
        
        for(int i = 0 ; i < n ; i++){
            if(count1 == 0 && el2 != nums[i]){
                count1++;
                el1 = nums[i];
            }
            else if(count2 == 0  && el1 != nums[i]){
                count2++;
                el2 = nums[i];
            }
            else if(el1 == nums[i])
                count1++;
            else if(el2 ==  nums[i])
                count2++;
            else{
                count1--;
                count2--;
            }
        }
        
        int ct1 = 0 , ct2 = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            if(el1 == nums[i]){
                ct1++;
            }
            else if(el2 == nums[i]){
                ct2++;
            }
        }
        
        vector<int> ans ;
        if(ct1 > (n/3)){
            ans.push_back(el1);
        }
        if(ct2 > (n/3)){
            ans.push_back(el2);
        }
        
        if(ans.size())
            return ans ;
        
        return {-1} ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends