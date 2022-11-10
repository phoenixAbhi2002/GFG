//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long x) {
        if(x<=9)
            return x;
            
        queue<int> q;
        
        // Initially pushing all the numbers 0-9 as they are all jumping numbers
        for(int i=0;i<=9;i++){
            q.push(i);
        }  
        
        int ans=INT_MIN;
        
        while(q.size()>0){
            int digit=q.front();
            q.pop();
            
            ans=max(ans, digit);
            
            int rem = digit%10;
            int num1=digit*10+rem-1;        // Number to the immediate left
            int num2=digit*10+rem+1;        // Number to the immediate right
            
            // Edge cases
            if(rem==0){
                if(num2<=x)
                    q.push(num2);          // In case of 0 only 101 will pushed not 99
            }
            else if(rem==9){
                if(num1<=x)
                    q.push(num1);          // In case of 9 only 98 will pushed, not 100
            }
            else{
                if(num1<=x)
                    q.push(num1);
                if(num2<=x)
                    q.push(num2);
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
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends