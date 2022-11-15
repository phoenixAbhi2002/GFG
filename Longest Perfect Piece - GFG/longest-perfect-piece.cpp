//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int n) {
        // code here
        int len =1;
        map<int, int>mp;
        
        int j=0;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
            
            while( (--mp.end())->first - mp.begin()->first > 1){
                mp[arr[j]]--;
                
                if(mp[arr[j]]==0)
                    mp.erase(arr[j]);
                    
                j++;
            }
            len = max(len, i-j+1);
        }
        return len;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends