//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    for(int i = 0; i < s.size(); ++i) {
        int flag = 0;
        if(x[0] == s[i]) {
            flag = 1;
            for(int j = 1; j < x.size(); ++j) {
                if(x[j] == s[i+j]) {
                    flag = 1;
                }
                else {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) return i;
        }
    }
    return -1;
}