//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    
		    int ans=0;
		    int n = s.size();
		    int i=0, j=0;
		    int maxf=0;
		    
		    unordered_map<char, int> mp;
		    
		    while(j<n){
		        mp[s[j]]++;
		        maxf = max(maxf, mp[s[j]]);
		        
		        int len = j-i+1;
		        if(len-maxf<=k){
		            j++;
		            ans=max(ans, len);
		        }
		        else{
		            mp[s[i]]--;
		            i++;
		            j++;
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends