//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            if(k==0)
                return m*n;
                
            vector<int> rows(n, 0);
            vector<int> cols(m, 0);
            
            for(int i=0;i<enemy.size();i++){
                rows[enemy[i][0]-1] = -1;
                cols[enemy[i][1]-1] = -1;
            }
            
            int maxRow=0, countRow=0;
            for(int i=0;i<n;i++){
                if(rows[i]!=-1)
                    countRow++;
                else
                    countRow=0;
                
                if(countRow>maxRow)
                    maxRow=countRow;
            }
            
            int maxCol=0, countCol=0;
            for(int i=0;i<m;i++){
                if(cols[i]!=-1)
                    countCol++;
                else
                    countCol=0;
                
                if(countCol>maxCol)
                    maxCol=countCol;
            }
            return maxRow*maxCol;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends