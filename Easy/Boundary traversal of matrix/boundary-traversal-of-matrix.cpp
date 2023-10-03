//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        int rowStart = 0,colStart = 0 , rowEnd = n-1 , colEnd = m-1;
        vector<int>vt;
        
        for(int i=colStart;i<=colEnd;i++)
            vt.push_back(matrix[rowStart][i]);
        rowStart++;
        
        if(vt.size()==m*n)
            return vt;
            
        for(int i=rowStart;i<=rowEnd;i++)
            vt.push_back(matrix[i][colEnd]);
        --colEnd;
        
        if(vt.size()==m*n)
            return vt;
        for(int i=colEnd;i>=colStart;i--)
            vt.push_back(matrix[rowEnd][i]);
        --rowEnd;
        
        if(vt.size()==m*n)
            return vt;
            
        for(int i=rowEnd;i>=rowStart;i--){
            vt.push_back(matrix[i][colStart]);
        }
        return vt;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends