//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void solve(int n,int m,int cur,unordered_set<int>& s)
    {
        if(cur>m)
            return;
        int p=cur%10;
        if(cur>=n && cur<=m)
            s.insert(cur);
        if(p<9)
            solve(n,m,(cur*10)+p+1,s);
        if(p>0)
            solve(n,m,(cur*10)+p-1,s);
    }
    int steppingNumbers(int n, int m)
    {
        // Code Here
        unordered_set<int> s;
        for(int i=0;i<=9;i++)
            solve(n,m,i,s);
        return s.size();
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends