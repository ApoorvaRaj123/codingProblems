class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ch = "";

        for (char i : s) {
            if (i == '(') {
                if (cnt > 0)
                    ch += i;
                cnt++;
            } else if (i == ')') {
                cnt--;
                if (cnt > 0)
                    ch += i;
            }
        }
        return ch;
    }
};
