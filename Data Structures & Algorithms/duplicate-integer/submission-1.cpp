class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
                if(mp[i]>1)return true;
            }
            else{
                mp[i]=1;
            }
        }
        return false;

        
    }
};