//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
        if(m!=n)
            return 0;
            
        int i=0, j=0;
        
        while(i<m || j<n){
            while(s[i]=='#')
                i++;
            while(t[j]=='#')
                j++;
            
            // In case of either of the pointers to the strings go out of the loop   
            if(i>=m && j<n)
                return 0;
            if(i<m && j>=n)
                return 0;
              
            // If the characters are not matching  
            if(s[i]!=t[j])
                return 0;
            else{
                // Since A cannot go right if i<j, it is negative case
                if(s[i]=='A' && i<j)
                    return 0;
                else if(s[i]=='B' && i>j)
                    return 0;
            }
            i++, j++;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends
