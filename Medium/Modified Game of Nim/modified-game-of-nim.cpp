//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findWinner(int n, int A[]){
        // code here
        int ans = 0;

        // Calculate the XOR of all elements in the array
        for (int i = 0; i < n; i++) {
            ans ^= A[i];
        }
    
        // If the XOR is 0, return player 1 as the winner
        if (ans == 0)
            return 1;
    
        // Initialize an array to keep track of visited elements
        int visit[n];
        
        // Initialize all elements in the 'visit' array to false
        for (int i = 0; i < n; i++) {
            visit[i] = false;
        }
    
        int idx = -1, i = 0;
        int res = 1;
    
        // Loop until a repeated element is encountered
        while (true) {
            // Break the loop if the current index matches the previous index
            if (idx == i)
                break;
    
            // If the element at the current index is not visited and not equal to the XOR result
            if (visit[i] == 0 && ans != A[i]) {
                // Update the XOR result
                ans ^= A[i];
                // Update the index
                idx = i;
                // Mark the current index as visited
                visit[i] = 1;
                // Toggle the result between 0 and 1
                res = (res + 1) % 2;
            }
    
            // Move to the next index in a circular manner
            i = (i + 1) % n;
        }
    
        // Return the w
        return res+1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends