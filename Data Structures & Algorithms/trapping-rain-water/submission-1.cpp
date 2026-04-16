class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0)return 0;

        int l = 0, r = n-1;
        int leftMax = height[l], rightMax = height[r];
        int water = 0;

        while(l<r){
            if(leftMax<rightMax){
                l++;
                leftMax = max(leftMax, height[l]);
                water+= leftMax-height[l];
            }
            else{
                r--;
                rightMax = max(rightMax, height[r]);
                water+= rightMax-height[r];
            }
        }
        return water;
        
    }
};
