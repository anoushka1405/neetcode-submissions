class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0, high = nums.size()-1, minimum = INT_MAX;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[low]<=nums[mid]){ //Left half sorted
                minimum = min(minimum,nums[low]);
                low = mid+1;
            }
            else { //right half sorted
                minimum = min(nums[mid],minimum);
                high = mid-1;
            }
        }
        return minimum;
        
    }
};
