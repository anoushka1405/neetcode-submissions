class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string stNew = "";
        int i = 0, j = 0;
        
        // Merge alternately while both words have characters
        while (i < word1.size() && j < word2.size()) {
            stNew += word1[i++];
            stNew += word2[j++];
        }
        
        // Append any remaining characters
        while (i < word1.size()) stNew += word1[i++];
        while (j < word2.size()) stNew += word2[j++];
        
        return stNew;
    }
};
