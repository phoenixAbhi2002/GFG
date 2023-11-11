//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.length() != str2.length())
            return false;
        
        int n = str1.length();
        
        vector<int> s1(256, -1);
        vector<int> s2(256, -1);
        
        for(int i=0; i<n; i++){
            char ch1 = str1[i];
            char ch2 = str2[i];
            
            if(s1[ch1]==-1 && s2[ch2]==-1){
                s1[ch1] = ch2;
                s2[ch2] = ch1;
            }
            else if(s1[ch1]!=ch2 || s2[ch2]!=ch1){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends