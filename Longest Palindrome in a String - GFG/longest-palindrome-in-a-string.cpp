//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int n = S.size();
        int maxLen=1;
        int start=0;
        
        if(n<=1)
            return S;
            
        // For odd length string
        for(int i=0;i<n;i++){
            
            int l=i, r=i;
            
            while(S[l]==S[r] && l>=0 && r<=n){
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxLen){
                maxLen=len;
                start=l+1;
            }
        }
        
        // For even length string
        for(int i=0;i<n;i++){
            
            int l=i, r=i+1;
            
            while(S[l]==S[r] && l>=0 && r<=n){
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxLen){
                maxLen=len;
                start=l+1;
            }
        }
        return S.substr(start, maxLen);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends