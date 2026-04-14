class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i : nums){
            mp[i]++;
            if(mp[i]>n/3 && find(result.begin(), result.end(),i)==result.end())result.push_back(i);
        }
        return result;
        
    }
};