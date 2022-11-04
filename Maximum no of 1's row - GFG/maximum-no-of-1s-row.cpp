//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int countOnes(vector<int>arr, int N){
            if(arr[0]==1){
                return N;
            }
            else if(arr[N-1]==0){
                return 0;
            }
            else{
                int l=0, r=N-1;
                
                while(l<=r){
                    int mid=(l+r)/2;
                    if(arr[mid]==1 && arr[mid-1]==0)
                        return N-mid;
                    else if(arr[mid]==1)
                        r=mid-1;
                    else
                        l=mid+1;
                }
            }
        }
        int maxOnes (vector <vector <int>> &arr, int N, int M)
        {
            // your code here
            int max=-1;
            int ans=-1;
            
            for(int i=0;i<N;i++){
                int x= countOnes(arr[i], M);
                if(x>max){
                    max=x;
                    ans=i;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends