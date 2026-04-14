class Solution {
public:

    bool isInteger(const string& s) {
    if (s.empty()) return false;

    int start = 0;
    if (s[0] == '-' || s[0] == '+') {
        if (s.size() == 1) return false; // only sign
        start = 1;
    }

    for (int i = start; i < s.size(); ++i) {
        if (!isdigit(s[i])) return false;
    }
    return true;
    }

    int calPoints(vector<string>& operations) {
        stack<int>st1;
        int sum = 0;
        if(operations.empty())return 0;
        for(string s1 : operations){
            if(isInteger(s1)){
                st1.push(stoi(s1));
            }
            else if(s1=="C"){
                st1.pop();
            }
            else if(s1=="D"){
                int a = st1.top();
                st1.push(2*a);

            }
            else if(s1=="+"){
                int a = st1.top();
                st1.pop();
                int b = st1.top();
                st1.pop();
                st1.push(b);
                st1.push(a);
                st1.push(a+b);

            }
               
        }
        while(!st1.empty()){
            sum+=st1.top();
            st1.pop();
        }
        return sum;
    }
};