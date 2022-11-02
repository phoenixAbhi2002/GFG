//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string compareTwo(string A, string B){
        string pre="";
        int i=0;
        
        while(i<A.size() && i<B.size()){
            if(A[i]==B[i])
                pre+=A[i];
            else
                break;
            i++;
        }
        return pre;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string pre=arr[0];
        
        for(int i=1;i<N;i++){
            pre=compareTwo(pre, arr[i]);
        }
        if(pre=="")
            return "-1";
            
        return pre;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends