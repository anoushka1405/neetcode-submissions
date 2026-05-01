class Solution {
public:
    int lengthOfLastWord(string s) {
        while(!s.empty() && s.back() == ' ') s.pop_back();
        int total = 0, lastIdx = -1;
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            if(ch==' '){
                lastIdx = i;
            }
            total++;
        }
        string s1 = s.substr(lastIdx+1,total);
        return s1.size();
        
    }
};