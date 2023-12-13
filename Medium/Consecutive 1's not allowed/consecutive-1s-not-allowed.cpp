//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll  int  zeroending=1;
        ll int   oneending=1;
        ll int sum=zeroending+oneending;
      
        if(n==1)
            return sum;
         
        int i=2;
        while(i<=n){
             
            oneending=zeroending;
            zeroending=sum;
            
            
            sum=(oneending+zeroending)%1000000007;
            i++;
        }
         
        return sum%1000000007;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends