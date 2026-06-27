class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        for(int i = 0;i<arr.size();i++){
            int currSum = 0;
            for(int j = i;j<arr.size();j++){
                currSum+=arr[j];
                if(j-i+1==k){
                    int avg = currSum/k;
                    if(avg>=threshold)count++;
                }
            }
        }
        return count;
        
    }
};