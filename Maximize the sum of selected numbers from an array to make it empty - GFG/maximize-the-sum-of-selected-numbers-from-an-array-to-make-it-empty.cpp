//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        
        int ans=0;  
        for(int i=n-1;i>=0;i--)
        {
            int A=a[i];
            
            if(mp.find(A)!=mp.end() && mp.find(A-1)!=mp.end())
            {
                ans+=A;
                mp[A]--;
                mp[A-1]--;
                
                if(mp[A]==0) 
                   mp.erase(A);
                   
                if(mp[A-1]==0)
                   mp.erase(A-1);
            }
            else if(mp.find(A)!=mp.end())
            {
                ans+=A;
                mp[A]--;
                
                if(mp[A]==0) 
                   mp.erase(A);
                   
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends