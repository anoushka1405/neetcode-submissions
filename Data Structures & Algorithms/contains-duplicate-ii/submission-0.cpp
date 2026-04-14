class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

         if(nums.size()==1||nums.size()==0) return false;

        unordered_map<int,int>mp;

        for(int i = 0 ; i<nums.size(); i++){
            if(mp.find(nums[i])!=mp.end() && i-mp[nums[i]]<=k ){
                return true;
            }
            mp[nums[i]] = i;
        }
        return false;

        
    }
};