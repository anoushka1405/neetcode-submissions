class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size()-1;
        int area = 0, maxArea = 0;

        while(left<right){
            int height = min(heights[right], heights[left]);
            int width = abs(left-right);
            area = height*width;
            maxArea = max(maxArea, area);

            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }   
        }
        return maxArea;
    }
};
