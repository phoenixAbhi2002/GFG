//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    int ans;
	    int n = nums.size();
	    
	    for(int i=1; i<=n-2; i++){
	        int less=0, more=0;
	        
	        // Count of smaller elements
	        for(int j=i-1; j>=0; j--){
	            if(nums[j]<nums[i])
	                less++;
	        }
	       
	        //Count of greater elements
	        for(int j=i+1; j<n; j++)
	            if(nums[j]>nums[i])
	                more++;
	        
	        ans =ans + (less*more);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
