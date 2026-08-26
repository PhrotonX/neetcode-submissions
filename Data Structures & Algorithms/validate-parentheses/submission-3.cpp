class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case '(':
                case '[':
                case '{':
                    brackets.push(s[i]);
                    continue;
            }
            
            if (brackets.size() == 0) return false;

            if((brackets.top() == '(' && s[i] == ')') ||
                (brackets.top() == '[' && s[i] == ']') ||
                (brackets.top() == '{' && s[i] == '}')){

                brackets.pop();
            }else{
                return false;
            }

        }

        return brackets.size() == 0;
    }
};
