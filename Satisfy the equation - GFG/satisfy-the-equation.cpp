//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    vector<int>lex(vector<int>a, vector<int>b){
        for(int i=0;i<4;i++){
            if(a[i]>b[i]){
                return b;
            }
            else if(a[i]<b[i]){
                return a;
            }
        }
        return a;
    }
  public:
    vector<int> satisfyEqn(int A[], int N) {
        // code here
        vector<int>ans = {INT_MAX, INT_MAX, INT_MAX, INT_MAX};
        unordered_map<int, vector<int>>mp;
        
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                
                int sum = A[i]+A[j];
                
                if(mp.find(sum)!=mp.end()){
                    
                    if(mp[sum][0]!=i && mp[sum][0]!=j && mp[sum][1]!=i && mp[sum][0]!=j){
                        vector<int>temp = {mp[sum][0], mp[sum][1], i, j};
                        ans = lex(ans, temp);
                    }
                }else{
                    mp[sum] = {i, j};
                }
            }
        }
        
        if(ans[0]==INT_MAX){
            return {-1, -1, -1, -1};
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
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends