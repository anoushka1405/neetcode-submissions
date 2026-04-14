class Solution {
public:
    int canEat(int n, vector<int>& piles){
        int time = 0;
        for(int pile : piles){
            time+=(pile+n-1)/n;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxVal = 0;
        int ans = 0;
        for(int pile : piles){
            if(pile>maxVal){
                maxVal = pile;
            }
        }
        int st = 1, end = maxVal;
        while(st<=end){
            int k = st+(end-st)/2;

            if(canEat(k,piles)<=h){
                ans = k;
                end = k-1;
            }
            else if(canEat(k,piles)>h){
                st = k+1;
            }

        }
        return ans;
        
    }
};
