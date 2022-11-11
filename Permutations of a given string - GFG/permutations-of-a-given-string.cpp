//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void permutation(string S, int idx, vector<string> &ans){
	        if(idx==S.size()-1){
	            ans.push_back(S);
	            return;
	        }
	        for(int i=idx; i<S.size(); i++){
	            
	            swap(S[idx], S[i]);     //Swap
	            permutation(S, idx+1, ans);     //recursion
	            swap(S[idx], S[i]);     //Backtracking
	        }
	        return;
	    }
	    
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    permutation(S, 0, ans);
		    
		    sort(ans.begin(), ans.end());
		    ans.erase(unique(ans.begin(), ans.end()), ans.end());
		    
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends