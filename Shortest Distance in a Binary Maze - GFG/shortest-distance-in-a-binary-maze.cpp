//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        //Initialy source and desti same then return 0                 

        if(source.first==destination.first && source.second == destination.second)
           return 0;

        //Using DJIKSTRA algo 

        // dis , source(row,col)

        queue<pair<int,pair<int,int>> > q;

        int n = grid.size();
        int m = grid[0].size();

        //Create dist array
        vector<vector<int>> dist(n,vector<int>(m,1e9));

        //For traverse all four direction
        int deltaRow[] =  {-1,0,1,0};
        int deltaCol[] =  {0,1,0,-1};

        //Mark intialiy dist zero for source
        dist[source.first][source.second] = 0;

        //Push into queue
        q.push({0,{source.first,source.second}});

        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;

            //Traverse all four direcion
            for(int i=0;i<4;i++)
            {
                int newRow = row + deltaRow[i];
                int newCol = col + deltaCol[i];

                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && grid[newRow][newCol]==1 
                    && dis + 1 < dist[newRow][newCol])
                    {
                        dist[newRow][newCol] = dis + 1;

                        if(newRow == destination.first && newCol==destination.second )
                           return dis + 1;

                        q.push({1+dis,{newRow,newCol}});   
                    }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends