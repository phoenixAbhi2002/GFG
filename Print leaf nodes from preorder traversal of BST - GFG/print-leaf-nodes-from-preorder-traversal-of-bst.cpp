//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        stack<int>s;
        vector<int>ans;
        
        for(int i=0,j=1;i<N,j<N;i++,j++){
            if(arr[i]>arr[j]){
                s.push(arr[i]);
            }
            else{
                int flag=0;
                while(s.size()>0 && arr[j]>s.top()){
                    s.pop();
                    flag=1;
                }
                if(flag==1){
                    ans.push_back(arr[i]);
                }
            }
        }
        ans.push_back(arr[N-1]);        //last element will always be a leaf
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends