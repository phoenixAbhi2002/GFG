//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string maxSum(string w,char x[], int b[],int n){
        // code here    
        
        unordered_map<char, int>mp;
        for(int i=0;i<n;i++){
            mp[x[i]] = b[i];
        }
        
        //Implementing KADANE's algortihm
        int sum = 0;
        int maxSum = INT_MIN;
        string ans = "";
        string temp = "";
        
        for(int i=0;i<w.size();i++){
            
            char ch=w[i];
            
            if(mp.find(ch)!=mp.end())       //Search for element in the map
                sum+=mp[ch];                //if found add its corresponding ASCII value in the map
            else
                sum+=ch;                    //else add its usual ASCII value
                
            temp+=ch;
            
            //Updating MAX
            if(sum>maxSum){
                maxSum = sum;
                ans=temp;
            }
            
            if(sum<0){
                temp="";
                sum=0;
            }
        }
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
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends