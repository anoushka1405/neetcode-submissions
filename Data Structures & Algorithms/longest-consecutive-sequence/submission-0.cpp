class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxSize = 0;
        unordered_set<int>s(nums.begin(),nums.end());

        for(int num : nums){
            if(s.find(num-1)==s.end()){
                int len = 1;
                int currNum = num;

            while(s.find(currNum+1)!=s.end()){
                len++;
                currNum++;
            }
            maxSize = max(len, maxSize);
            }
        }
    return maxSize;
    
        
    }
};
