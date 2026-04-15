class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int result = 0;

        int l = 0, r = n-1;

        while(l<=r){
            int currSum = people[r]+people[l];
            if(currSum<=limit){
                l++;
                r--;
            }
            else{
                r--;
            }
            result++;
        }
        return result;

        
    }
};