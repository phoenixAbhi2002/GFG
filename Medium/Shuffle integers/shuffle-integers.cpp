//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int nums[],int n)
	{
	    // Your code goes here
	    for(int i=0; i<n; i++){
	        int currNum = nums[i];
	        int currPos = i;
	        
	        while(currNum > 0){
	            int newPos=0;
	            if(currPos<n/2)
	                newPos = 2*currPos;
	            else
	                newPos = 2*(currPos - n/2) + 1;
	                
	            int newNum = nums[newPos];
	            nums[newPos] = -currNum;
	            currNum = newNum;
	            currPos = newPos;
	        }
	    }
	    for(int i=0; i<n; i++){
	        if(nums[i] < 0){
	            nums[i] = -nums[i];
	        }
	    }
	   // return nums;
	}	 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends