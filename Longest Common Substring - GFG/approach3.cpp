    public:
    int t[1001][1001];
    int ans=0;
    
    int LCS(string x, string y, int i, int j){
        
        int ctr1=0, ctr2=0;
        
        // If either or both of the strings are empty
        if(i==0 || j==0){
            return t[i][j]=0;
        }
        
        if(t[i][j]!=-1){
            return t[i][j];
        }
        
        int ctr=0;
        
        // If the last character is same in both the strings
        if(x[i-1]==y[j-1]){
            ctr = 1+LCS(x, y, i-1, j-1);
            ans=max(ans, ctr);
        }
        
        ctr1 = LCS(x, y, i-1, j);
        ctr2 = LCS(x, y, i, j-1);
        
        // ctr = max({ctr, ctr1, ctr2});
        
        return t[i][j]=ctr; 
    }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        memset(t, -1, sizeof(t));
        LCS(S1, S2, n, m);
        return ans;
    }
};
