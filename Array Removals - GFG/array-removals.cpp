//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int solve(vector<int>&arr, int i, int j, int k, vector<vector<int>>&dp){
        if(i>=j)
            return 0;
            
        if(arr[j]-arr[i] <= k)
            return 0;
            
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        int ans=0;
        
        ans=1 + min(solve(arr, i+1, j, k, dp), solve(arr, i, j-1, k, dp));
        
        return dp[i][j]=ans;
    }
    int removals(vector<int>& arr, int k){
        //Code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return solve(arr, 0, n-1, k, dp);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends