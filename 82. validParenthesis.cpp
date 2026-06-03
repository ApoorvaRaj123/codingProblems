class Solution {
public:
    bool isValid(string s) {
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(') a++;
            else if(s[i] == '{') b++;
            else if(s[i] == '[') c++;
            else if(s[i] == ')') a--;
            else if(s[i] == '}') b--;
            else if(s[i] == ']') c--;
        }
        if(a != 0 || b != 0 || c != 0){
            return false;
        }
        else{
            return true;
        }
    }
};
