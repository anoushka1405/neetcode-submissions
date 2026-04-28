class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
private:
    int helper(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int res = 0, l = 0, curr = 0;

        for(int r = 0;r<nums.size();r++){
            curr+=nums[r];
            while(curr>goal){
                curr-=nums[l];
                l++;
            }
            res+=(r-l+1);
        }
        return res;
    }
};