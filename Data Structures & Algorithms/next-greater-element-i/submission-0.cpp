class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        stack<int>st;
        unordered_map<int,int>mp;

        for(int num : nums2){
            while(!st.empty() && num>st.top()){
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }
        for(int num : nums1){
            result.push_back(mp[num]);
        }
        return result;
    }
};