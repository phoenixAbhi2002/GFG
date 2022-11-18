
class Solution{
    public:
    vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(int i=0; i<v1.size(); i++){
            mp[v1[i]]++;
        }
        
        sort(v2.begin(), v2.end());
        
        for(int i=0; i<v2.size(); i++){
            if(mp[v2[i]]>0){
                mp[v2[i]]--;
                ans.push_back(v2[i]);
            }
        }
        return ans;
    }
};
