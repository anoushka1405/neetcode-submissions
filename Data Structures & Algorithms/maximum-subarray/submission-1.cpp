class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            int currSum = 0;
            for(int j = i;j<nums.size();j++){
                currSum+=nums[j];
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum;

    }
};
