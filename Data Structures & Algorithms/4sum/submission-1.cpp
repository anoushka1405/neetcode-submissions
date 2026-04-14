class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int left = j+1,right = n-1; 

                if(i > 0 && nums[i] == nums[i - 1]) continue;
                if(j > i+1 && nums[j] == nums[j - 1]) continue;

                while(left<right){
                    long long sum = (long long)nums[i]+nums[j]+nums[left]+nums[right];

                    if(sum<target){
                        left++;
                    }
                    else if(sum>target){
                        right--;
                    }
                    else{
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;

                        while(left < right && nums[left] == nums[left - 1]) left++;
                        while(left < right && nums[right] == nums[right + 1]) right--;
                    }
                }
                
            }
        }
        return result;
        
    }
};