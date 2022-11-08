class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        // code here
        vector<long long int>ans;
        map<int, int>mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if((it.second%2)!=0){
                ans.push_back(it.first);
            }
        }
        //reverse(ans.begin(), ans.end());
        sort(ans.begin(), ans.end(), greater<long long int>());
        return ans;
    }
};
