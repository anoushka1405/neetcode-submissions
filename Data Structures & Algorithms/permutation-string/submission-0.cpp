class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        
        vector<int> count1(26, 0), count2(26, 0);

        int n1 = s1.size();
        int n2 = s2.size();

        for(char c : s1) count1[c-'a']++;

        for(int i = 0 ; i < n2 ; i++){
            count2[s2[i]-'a']++;

            if(i>=n1){
                count2[s2[i-n1]-'a']--;
            }

            if(count1==count2)return true;
        }
        return false;
    }
};
