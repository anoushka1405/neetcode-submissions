class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;

        for(char ch : t){
            mp[ch]++;
        }

        int m = s.size();
        int l = 0;
        int missing = t.size();

        int start = 0;
        int minLen = INT_MAX;

        for(int r = 0; r < m; r++){
            // include current char
            if(mp[s[r]] > 0) {
                missing--;
            }
            mp[s[r]]--;

            // shrink window when valid
            while(missing == 0){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    start = l;
                }

                // remove left char
                mp[s[l]]++;
                if(mp[s[l]] > 0){
                    missing++;
                }
                l++;
            }
        }

        if(minLen == INT_MAX) return "";
        return s.substr(start, minLen);
    }
};