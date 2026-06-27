class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int maxLen = 1;
        int n = arr.size();
        int l = 0, r = 1;
        string prev = "";

        while(r<n){
            if(arr[r-1]<arr[r] && prev!="<"){
                maxLen = max(maxLen, r-l+1);
                r++;
                prev = "<";
            }
            else if(arr[r-1]>arr[r] && prev!=">"){
                maxLen = max(maxLen, r-l+1);
                r++;
                prev = ">";
            }
            else{
                if(arr[r-1]==arr[r]){
                    r = r+1;
                }
                l = r-1;
                prev = "";
            }

        }
        return maxLen;
        
    }
};