//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        q.push(0);
        vector<int>res;
        unordered_map<int,bool>mp;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                int f=q.front();
                q.pop();
                if(mp[f])continue;//true;
                res.push_back(f);
                mp[f]=true;
                for(int j=0;j<adj[f].size();j++){
                    if(mp[adj[f][j]])continue;//true;
                    // res.push_back(adj[f][j]);
                    // // mp[adj[f][j]]=true;
                    q.push(adj[f][j]);
                }
            }
        }
        return res;
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