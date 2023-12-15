//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int mod=1e9+7;
        int nthPoint(int n){
		    if(n<=1)return 1;
            int  curr,prev1=2,prev2=1;
            for(int i =2;i<n;i++){
            curr=(prev1+prev2)%mod;
            prev2=prev1;
            prev1=curr;
         }
         return prev1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends