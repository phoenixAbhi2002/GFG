//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
    int ans = -1;
    
    void dfs(int node, vector<int> &vis, vector<int> adj[], int steps, int x){
        vis[node] = 1;
        if(node==x){
            ans = steps;
            return;
        }
        
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                
                dfs(it, vis, adj, steps+1, x);
            }
        }
    }
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<int> vis(V,0);
        dfs(0,vis,adj,0,X);
        return ans;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends