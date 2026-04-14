class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int i : nums){
            if(!st.insert(i).second)return true;
        }  
        return false;
    }
};