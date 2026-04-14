class Solution {
public:
    bool checkValidString(string s) {
        int maxOpen = 0;
        int minOpen = 0;

        for(char ch : s){
            if(ch=='('){
                maxOpen++;
                minOpen++;
            }
            else if(ch==')'){
                maxOpen--;
                minOpen--;
            }
            else if(ch=='*'){
                maxOpen++;
                minOpen--;
            }
            if(maxOpen<0)return false;
            if(minOpen<0)minOpen = 0;
        }
        return minOpen==0;
        
    }
};
