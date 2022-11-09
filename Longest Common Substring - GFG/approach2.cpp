    public:
    int LCS(string x, string y, int i, int j, int ctr){
        
        int ctr1=0, ctr2=0;
        
        // If either or both of the strings are empty
        if(i==0 || j==0){
            return ctr;
        }
        
        // If the last character is same in both the strings
        if(x[i-1]==y[j-1]){
            ctr = LCS(x, y, i-1, j-1, ctr+1);
        }
        
        ctr1 = LCS(x, y, i-1, j, 0);
        ctr2 = LCS(x, y, i, j-1, 0);
        
        ctr = max({ctr, ctr1, ctr2});
        
        return ctr; 
    }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int ctr = LCS(S1, S2, n, m, 0);
        return ctr;
    }
};
