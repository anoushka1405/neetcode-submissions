class Solution {
public:
    int noShips(int k,vector<int>& weights ){
        int ships = 1;
        int load = 0;
        for(int w : weights){
            if(load+w<=k){
                load+=w;
            }
            else{
                ships++;
                load = w;
            }
        }
        return ships;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int capacity = 0,total = 0;
        for(int w : weights){
            total+=w;
            if(w>capacity){
                capacity = w;
            }
        }
        int st = capacity;
        int end = total;
        int ans = INT_MAX;
        while(st<=end){
            int cap = st+(end-st)/2;

            int k = noShips(cap,weights);

            if(k<=days){
                ans = min(ans,cap);
                end = cap-1;
            }
            else if(k>days){
                st = cap+1;
            }

        }
        return ans;
        
    }
};