//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        // This method can only be used to return the size of the Longest increasing Subsequence.
        // Time Complexity : O(nlogn) -> for loop takes n time, lower_bound takes log(n).
        vector<int> ans;
        ans.push_back(H[0]);
        
        for(int i=1; i<N; i++){
            if(H[i]>ans.back())
                ans.push_back(H[i]);
            else{
                int index = lower_bound(ans.begin(), ans.end(), H[i]) - ans.begin();
                ans[index] = H[i];
            }
        }
        return N - ans.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
