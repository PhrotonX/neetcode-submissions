class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), convertString);

        s.erase(
            remove_if(s.begin(), s.end(), [](unsigned char c){
                return (c < '0' || c > '9') && (c < 'a' || c > 'z');
            }), s.end()
        );

        //cout << s << endl;

        bool result = true;
        int half = floor(half = s.size() / 2);

        for(int i = 0; i < half; i++){
            int j = s.size() - 1 - i;

            //cout << s[i] << ":" << s[j] << " ";

            if(s[i] != s[j]){
                result = false;
                break;
            }
        }

        return result;
    }

    static char convertString(char s){
        if(s >= 0x41 && s <= 0x5A){
            return s = s + 0x20;
        }

        return s;
    }
};
