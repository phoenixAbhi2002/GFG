//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n<=1 ){
            return 0;
        }
        
        if(arr[0]==0)
            return -1;
        
        int maxReach = arr[0];      //maximum reachable index in the array
        int step=arr[0];            //no. of steps we can still take
        int jump=1;                 //no. of jumps necessary to reach maxReach position
        
        for(int i=1;i<n;i++){
            //Check if we have reached the end of the array
            if(i==n-1)
                return jump;
                
            maxReach = max(maxReach, i+arr[i]);
            step--;                 //since we used a step to get to the current state
            
            if(step==0){            //if no further jumps left
                jump++;             //we must have used a jump
                
                if(i >= maxReach){
                    return -1;
                }
                
                step=maxReach-i;
            }
        }
        
        
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends