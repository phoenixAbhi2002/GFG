//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define mod 1000000007;
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        if(n<=1){
            return n;
        }
        
        long long int previousFib = 0, currentFib = 1;
        
        for(int i=2; i<=n; i++){
            long long int newFib = (previousFib + currentFib)%mod;
            previousFib= currentFib;
            currentFib = newFib;
        }
        return currentFib;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends