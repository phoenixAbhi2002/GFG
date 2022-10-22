//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mod=1e8;
    
    /*int solve(int N, vector<int>dp){
        
        //base cases
        if(N==0)
            return 1;
        if(N<0)
            return 0;
            
        if(dp[N]!=-1)
            return dp[N];
            
        int ansFrom1=0, ansFrom2=0;
        
        //in case of chossing 1
        ansFrom1+=solve(N-1, dp);
        
        //in case of chossing 2
        ansFrom2+=solve(N-2, dp);
        
        return dp[N] = (ansFrom1 + ansFrom2)%mod;
    }*/
    
    int fillingBucket(int N) {
        // code here
        
        vector<int>dp(N+1, 0);
        
        dp[0]=1;
        
        for(int i=1;i<=N;i++){
            dp[i] = (dp[i-1] + dp[i-2])%mod;
        }
        
        return dp[N];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends