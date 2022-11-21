//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void solve(vector<vector<int>> &ans, int target, int num, vector<int> &temp){
	    
	    if(target==0){
	        ans.push_back(temp);
	        return ;
	    }
	    if(num<=0)
	        return ;
	        
	    if(num<=target){
	        temp.push_back(num);
	        solve(ans, target-num, num, temp);
	        
	       // backtracking
	       temp.pop_back();
	    }
	    solve(ans, target, num-1, temp);
	}
    vector<vector<int>> UniquePartitions(int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(ans, n, n, temp);
        
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
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends
