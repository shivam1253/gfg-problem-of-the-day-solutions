//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   void dfs(int x, vector<bool>& vis, vector<int> adj[], vector<int>& ans){
       
        // visit and push in final ans
        vis[x] = 1;
        ans.push_back(x);
        
        // go to unvisited adjacent nodes and run dfs
        for(auto& i: adj[x]){
            if(!vis[i]){
                dfs(i, vis, adj, ans);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
          vector<bool> vis(V, 0);
        
        vector<int> ans;
        
        // for disconnected graph
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                dfs(i, vis, adj, ans);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends