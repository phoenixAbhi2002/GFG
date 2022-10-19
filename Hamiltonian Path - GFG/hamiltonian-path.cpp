//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    bool dfs(vector<int>adjList[], int node, vector<int>vis, int count){
        
        //base case
        if(count==(vis.size()-1))
            return true;
            
        //mark the visited nodes as true
        vis[node] = 1;
        
        //increase count
        count+=1;
        for(auto i:adjList[node]){
            if(!vis[i]){
                if(dfs(adjList, i, vis, count))
                    return true;
            }
        }
        return false;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        //adjacency list
        vector<int>adjList[N+1];
        
        for(auto i:Edges){
            int x = i[0];
            int y = i[1];
            
            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }
        int count=1;
        
        //visited array
        vector<int>vis(N+1, 0);
        for(int i=1;i<=N;i++){
            if(dfs(adjList, i, vis, count))
                return true;
        }
        return false;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends