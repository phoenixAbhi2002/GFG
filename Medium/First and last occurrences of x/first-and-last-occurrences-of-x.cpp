//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int first = -1;
        int second = -1;
        bool exist = false;
        for(int i=0; i<n; i++){
            if(arr[i] == x && !exist){
                exist = true;
                first = i;
            }
            else if(arr[i] == x){
                second = i;
            }
        }
        if(second == -1 && first == -1 ) return {-1,-1};
        else if(second == -1) {
            second = first;
        }
        return {first,second};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends