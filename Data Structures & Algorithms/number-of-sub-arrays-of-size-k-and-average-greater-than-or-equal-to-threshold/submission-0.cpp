class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0;
        int L = 0;
        int currSum = 0;
        for(int R = 0;R<arr.size();R++){
            currSum+=arr[R];
            if(R-L+1>k){
                currSum-=arr[L];
                L++;
            }
            if(R-L+1==k){
                if(currSum>=k*threshold)ans++;
            }

        }
        return ans;

        
    }
};