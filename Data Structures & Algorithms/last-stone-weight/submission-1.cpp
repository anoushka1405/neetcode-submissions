class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>>pq; //max heap
        for(int num : stones){
            pq.push(num);
        }
        while(pq.size()>1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(x==y){
                continue;
            }
            else if(x<y){
                y = y-x;
                pq.push(y);
            }

        }
        if(pq.size()==0)return 0;
        return pq.top();
        
    }
};
