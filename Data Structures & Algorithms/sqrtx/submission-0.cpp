class Solution {
public:
    int mySqrt(int x) {
        int st = 0;
        int end = x;
        int res = 0;

        while(st<=end){
            int mid = st+(end-st)/2;

            if(pow(mid,2)>x){
                end = mid-1;
            }
            else if(pow(mid,2)<x){
                st = st+1;
                res = mid;
            }
            else{
                return mid;
            }
        }
        return res;

        
    }
};