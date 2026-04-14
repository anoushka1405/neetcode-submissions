class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char c : s){
            if(isalnum(c)){
               result+=tolower(c); 
            }
        }
        
        string s1 = result;
        reverse(s1.begin(),s1.end());

        if(s1==result)return true;

        return false;
        
    }
};
