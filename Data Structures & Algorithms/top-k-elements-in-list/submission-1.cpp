class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i : nums){
            mp[i]++;
        }

        int n = nums.size();
        vector<vector<int>>buckets(n+1);

        for(auto& [num,count] : mp){
            buckets[count].push_back(num);
        }

        vector<int>result;

        for(int i = n; i>=0 && result.size()<k; i--){
            for(int num : buckets[i]){
                result.push_back(num);
                if(result.size()==k)break;
            }

        }
        return result;
    }
};
