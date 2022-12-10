//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    stack<char> st;
    int n = num.size();
    
    for(int j=0; j<n; j++){
        char ch = num[j];
        while(!st.empty() && st.top()-'0'>ch-'0' and k>0){
            st.pop();
            k--;
        }
        st.push(ch);
    }
    
    // If any k is left
    while(k>0 && !st.empty()){
        st.pop();
        k--;
    }
    
    // Storing in ans
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        st.pop();
        ans.push_back(ch);
    }
    
    // Removing any leading zeros
    while(ans.back()=='0')
        ans.pop_back();
        
    if(ans.empty())
        return "0";
        
    reverse(ans.begin(), ans.end());
    
    return ans;
}
