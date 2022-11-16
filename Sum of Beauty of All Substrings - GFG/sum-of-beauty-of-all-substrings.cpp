//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    int findBeauty(vector<int> fre){
        int mx = INT_MIN, mn = INT_MAX;
        for(int f:fre){
            if(f==0)
                continue;
            mx = max(mx,f);
            mn = min(mn,f);
        }
        return mx-mn;
    }
  public:
    int beautySum(string s) {
        int n = s.length();
        int ans=0;
        
        for(int i=0; i<n; i++){
            
            vector<int> fre(26, 0);
            for(int j=i; j<n; j++){
                fre[s[j] - 'a']++;
                ans+=findBeauty(fre);
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
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends