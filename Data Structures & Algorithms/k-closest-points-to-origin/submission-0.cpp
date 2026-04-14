class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>result;
        priority_queue<pair<int, vector<int>>> pq;
        for(vector<int> vec : points){
            int dist = vec[0]*vec[0]+vec[1]*vec[1];
            pq.push({dist,vec});
            if(pq.size()>k)pq.pop();
        }

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;

        
    }
};
