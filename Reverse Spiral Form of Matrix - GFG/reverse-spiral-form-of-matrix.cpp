//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&a)  {
        // code here
        vector<int>ans;
        
        //s->starting row, column      e->ending row, column
        int sRow=0, sCol=0, eCol=c-1, eRow=r-1;
        
        while(sRow<=eRow && sCol<=eCol){
            
            //top row left to right
            for(int i=sCol;i<=eCol;i++){
                ans.push_back(a[sRow][i]);
            }
            sRow++;
            
            //right column top to bottom
            for(int i=sRow;i<=eRow;i++){
                ans.push_back(a[i][eCol]);
            }
            eCol--;
            
            //bottom row right to left
            if(sRow<=eRow){
                for(int i=eCol;i>=sCol;i--){
                    ans.push_back(a[eRow][i]);
                }
            }
            eRow--;
            
            //right column bottom to top
            if(sCol<=eCol){
                for(int i=eRow;i>=sRow;i--){
                    ans.push_back(a[i][sCol]);
                }
            }
            sCol++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
