//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int n) {
        // code here
        int count=n/26;
        int rem=n%26;
        
        string ans = "";
        
        // For the complete set of 26 characters
        while(count>0){
            int i=0;
            while(i<26){
                ans.push_back('a'+i);
                i++;
            }
            count--;
        }
        // For the remaining characters i.e less than 26
        // Case 1: If remainder is even
        if(rem%2 == 0){
            
            // first half (n/2)
            for(int i=0; i<rem/2; i++)
                ans.push_back('a'+i);
            
                
            // second half
            for(int j=26-rem/2; j<26; j++){
                ans.push_back('a'+j);
            }
        }
        // Case 2: If remainder is odd
        else{
            // to find SUM of digits
            int digitSum = 0;
            int r = n;
            while(r>0){
                
                // adding the rightmost digit (remainder first)
                digitSum+=r%10;
                // then dividing the number by 10
                r/=10;
            }
            
            // if sum of digits is even
            if(digitSum%2 == 0){
                
                // first half
                for(int i=0; i<(rem+1)/2; i++){
                    ans.push_back('a'+i);
                }
                
                for(int j=26-(rem-1)/2; j<26; j++){
                    ans.push_back('a'+j);
                }
            }
            // if sum of digits is odd
            else{
                // first half
                for(int i=0;i<(rem-1)/2;i++)
                    ans.push_back('a'+i);
              
                // second half
                for(int j=26-(rem+1)/2;j<26;j++)
                    ans.push_back('a'+j);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
