//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // For upper half
        for(int i= 1; i<= n; i++){
            // To add the spaces 
            for(int j= i; j<n; j++){
                cout << " ";
            }
            for(int k =0; k < i; k++ ){
                cout << "* ";
            }
            cout << endl;
        }

        // For lower half
        for(int i=0; i<n; i++){
            for(int j=0 ; j<i; j++){
                cout << " ";
            }
            for(int k = i; k<n; k++){
                cout<< "* ";
            }
            cout<< endl;
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends