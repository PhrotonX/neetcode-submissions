class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for(int m = 0; m < strs.size(); m++) {
            encoded += strs[m] + "\\#";
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        string text;
        for(int n = 0; n < s.size(); n++) {
            if(s[n] == '\\'){
                if(s[n + 1] == '#'){
                    decoded.push_back(text);
                    text = "";

                    n++;
                    continue;
                }
            }

            text += s[n];
        }

        return decoded;
    }
};
