//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        // code here
        
        int mod=1e8;
        
        if(N<=3)
            return N;
            
        int prev1=1, prev2=2;
        
        for(int i=1;i<=N-2;i++){
            int curr=(prev1+prev2)%mod;
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
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