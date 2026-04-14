class Solution {
public:
    bool isPalindrome(const string &s, int st, int end) {
        while (st < end) {
            if (s[st] != s[end]) return false;
            st++;
            end--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
        }
        return true;
    }
};