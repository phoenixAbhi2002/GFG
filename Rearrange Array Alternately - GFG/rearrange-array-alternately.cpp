//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    
    
    
    //***********In this solution time compelexity is O(n)***********
    
    void rearrange(long long *arr, int n) 
    { 
    	vector<long long>v;
    	
    	for(int i=n-1, j=0; j<=i; i--, j++){
    	    if(i==j){
    	        v.push_back(arr[i]);
    	        continue;
    	    }
    	    v.push_back(arr[i]);
    	    v.push_back(arr[j]);
    	}
    	for(int i=0;i<n;i++){
    	    arr[i] = v[i];
    	}
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends