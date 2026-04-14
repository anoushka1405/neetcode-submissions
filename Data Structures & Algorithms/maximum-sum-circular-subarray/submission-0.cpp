class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0];
        int currMax = 0;

        int minSum = nums[0];
        int currMin = 0;

        int total = 0;

        for(int n : nums){
            currMax = max(n,currMax+n);
            currMin = min(n,currMin+n);

            maxSum = max(maxSum,currMax);
            minSum = min(minSum,currMin);

            total+=n;
        }

        if(maxSum<0)return maxSum;

        return max(maxSum,total-minSum); 
    }
};