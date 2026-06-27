class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int currSum = 0;
            for(int len = 0;len<n;len++){
                currSum+=nums[(i+len)%n];
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum;
    }
};