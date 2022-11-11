//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int ans=0;
    vector<int>mp(256, -1);
    int j=0;
    
    for(int i=0; i<S.size(); i++){
        j = max(j, mp[S[i]]+1);
        ans = max(ans, i-j+1);
        mp[S[i]]=i;
    }
    return ans;
}