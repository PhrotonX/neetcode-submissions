class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> frequency_s;
        std::map<char, int> frequency_t;

        for(int i = 0; i < s.length(); i++){
            int count = frequency_s[s[i]];

            frequency_s[s[i]] = count + 1;
        }

        for(int i = 0; i < t.length(); i++){
            int count = frequency_t[t[i]];

            frequency_t[t[i]] = count + 1;
        }

        bool result = true;

        for(auto& data : frequency_s){
            //cout << "S Key: " << data.first << " S Value: " << data.second;
            //cout << "T Key: " << data.first << " T Value: " << frequency_t[data.first];

            if(data.second == frequency_t[data.first]){
                result = true;
            }else{
                result = false;
            }

            //cout << " Result: " << result << endl;

            if(result == false) return result;
        }

        if(frequency_s.size() != frequency_t.size()) return false;

        return result;
    }
};
