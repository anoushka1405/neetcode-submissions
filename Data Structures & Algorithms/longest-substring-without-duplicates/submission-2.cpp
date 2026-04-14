class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int L = 0,maxLen = 0;
        for(int R = 0;R<s.size();R++){
            char ch = s[R];
            if(mp.find(ch)!=mp.end()){
                L = max(mp[ch]+1,L);
            }
            mp[ch] = R;
            maxLen = max(maxLen,R-L+1);
        }
        return maxLen;
        
    }
};
