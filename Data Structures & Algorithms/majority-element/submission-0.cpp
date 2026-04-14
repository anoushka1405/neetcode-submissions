class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for(int num : nums){
            if (count==0)candidate = num;
            (candidate==num)? count+=1 : count-=1;
        }
        return candidate;
        
    }
};