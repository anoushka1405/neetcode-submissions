class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0,maxLen = 0;
        unordered_map<char,int>mp;
        for(int right = 0; right<s.size();right++){
            char c = s[right];
            if(mp.find(c)!=mp.end()&&mp[c]>=left){
                left = mp[c]+1;
            }
            mp[c] = right;
            maxLen = max(right-left+1, maxLen);

        }
        return maxLen;
    }
};
