//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        // To store the XOR value of the complete array
        int x=0;
        for(int i=0;i<n;i++){
            x = x^arr[i];
        }
        
        // To find the first step bit
        int set = x & ~(x-1);
        
        // To divide the array into 2 class of arrays
        int first=0, second=0;
        for(int i=0;i<n;i++){
            // first set bit is non-zero category
            if(set & arr[i])
                first = first^arr[i];
            // first set bit is zero category
            else
                second=second^arr[i];
        }
        
        if(first>=second){
            return {first, second};
        }
        else
            return {second, first};
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends