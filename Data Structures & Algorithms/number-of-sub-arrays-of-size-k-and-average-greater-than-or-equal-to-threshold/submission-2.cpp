class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int l = 0;
        int currSum = 0;
        for(int r = 0;r<arr.size();r++){
            currSum+=arr[r];
            if(r-l+1>k){
                currSum-=arr[l];
                l++;
            }
            if(r-l+1==k){
                if(currSum>=k*threshold)count++;
            }

        }
        return count;
        
    }
};