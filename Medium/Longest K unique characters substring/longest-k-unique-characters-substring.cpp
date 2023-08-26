//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int freq[26]={0},ans=-1,i=0,j=0,n=s.length(),sum;
        freq[s[0]-'a']++;
        while(j<n){
            sum=0;
            for(int t=0; t<26; t++) if(freq[t]!=0) sum++;
            if(sum>k) freq[s[i++]-'a']--;
            else{
                if(sum==k) ans=max(ans,(j-i+1));
                freq[s[++j]-'a']++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends