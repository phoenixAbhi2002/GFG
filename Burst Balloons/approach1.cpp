//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int solve(int i, int j, vector<int> &nums){
        
        if(i>j)
            return 0;
        
        int maxi = INT_MIN;
        for(int k=i; k<=j; k++){
            int ans = nums[i-1]*nums[k]*nums[j+1] + solve(i, k-1, nums) 
                        + solve(k+1, j, nums);
            
            maxi = max(ans, maxi);
        }
        return maxi;
    }
    int maxCoins(int N, vector<int> &nums) {
        // code here
        int n = nums.size();
        nums.push_back(1);
        // Inserting a 1 at the beginning
        nums.insert(nums.begin()+0, 1);
        
        
        return solve(1, n, nums); //running the function from 1->n beacuse first and last elemetnt are 1's
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
