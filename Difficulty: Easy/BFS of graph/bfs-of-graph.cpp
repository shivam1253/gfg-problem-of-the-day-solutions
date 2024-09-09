//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
    // Result vector to store BFS traversal
    vector<int> ans; 

    // Visited array to keep track of visited nodes
    vector<int> visited(v, 0); 
    
    // Queue to help with BFS traversal
    queue<int> q;             

    // Start with the node 0 (assuming the BFS starts from node 0)
    q.push(0);
    visited[0] = 1; // Mark node 0 as visited
    
    // While the queue is not empty
    while (!q.empty()) {  
        int node = q.front(); // Get the front node from the queue
        q.pop();              // Pop it from the queue
        ans.push_back(node);  // Add the node to the BFS result

        // Iterate through all adjacent nodes of the current node
        for (int neighbor : adj[node]) { 
            if (visited[neighbor] == 0) { // If the neighbor is not visited
                q.push(neighbor);        // Push it to the queue
                visited[neighbor] = 1;   // Mark it as visited
            }
        }
    }
    
    return ans; // Return the BFS resul

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends