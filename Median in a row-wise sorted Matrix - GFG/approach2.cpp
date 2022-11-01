//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int solve(vector<int> &A, int val){
        
        int low=0, high=A.size()-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(A[mid] <= val)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here  
        int low=1, high=2001;
        
        int actual_count=(R*C-1)/2;
        
        while(low<=high){
            int mid=low + (high-low)/2;
            
            //finding no of elements less than mid
            int count=0;
            for(int i=0;i<R;i++){
                count+=solve(matrix[i], mid);
            }
            
            //checking count
            if(count<=actual_count)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends
