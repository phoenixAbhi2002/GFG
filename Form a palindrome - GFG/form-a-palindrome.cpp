//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    int LCS(string a, string b, int n){
        int t[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0; j<=n; j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
                else if(a[i - 1]==b[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        return t[n][n];
    }
    int LPS(string s){
        string a = s;
        reverse(s.begin(), s.end());
        string b=s;
        int n=s.size();
        return LCS(a, b, n);
    }
  public:
    int countMin(string str){
    //complete the function here
    return str.size() - LPS(str);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends