//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int N = 2*n - 1;
        for(int i = 0; i<n; i++){
            for(int j=0; j<=(N/2+i); j++){
                if( (j<=(N/2+i)) && (j>=(N/2-i)) ){
                    cout << "*";
                }else{
                    cout << " ";   
                }
            }
            cout << "\n";
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends