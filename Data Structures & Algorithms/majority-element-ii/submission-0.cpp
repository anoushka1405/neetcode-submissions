class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int>result;
        for(int num : nums){
            mp[num]++;
        }
        for(auto& pair : mp){
            if(pair.second>n/3){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};