class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int>result;
        sort(nums.rbegin(),nums.rend());
        for(int i = 0;i<k;i++){
            result.push_back(nums[i]);
        }
        return nums[k-1];
        
    }
};
