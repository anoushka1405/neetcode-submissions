class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i : nums){
            mp[i]++;
        }

    vector<pair<int, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(),
        [](const pair<int,int> &a, const pair<int,int> &b) {
            return a.second > b.second;
        });
        
        for(auto& pair : vec){
            if(k>0){
                ans.push_back(pair.first);
                k--;
            }
        }
        return ans;
        
        
    }
};
