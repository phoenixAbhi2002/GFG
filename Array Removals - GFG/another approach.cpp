//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        
        int ans=n-1;
        
        for(int i=0;i<n;i++){
            
            /*Since we want to search for the max element from which if arr[i] is subtracted <k
            i.e the number just before the upper_bound
            That's why subtract 1*/
            int j=upper_bound(arr.begin()+i, arr.begin()+n, arr[i]+k) - arr.begin() - 1;
            ans = min(ans, n-(j-i+1));
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends
