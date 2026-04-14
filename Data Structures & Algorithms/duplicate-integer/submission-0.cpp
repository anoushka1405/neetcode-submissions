class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
            }
            else{
                mp[i]=1;
            }
        }
        for(const auto& pair : mp){
            if(pair.second>1){
                return true;
            }
        }
        return false;

        
    }
};