class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grouped;

        for(int i = 0; i < strs.size(); i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());

            vector<string>* result = &grouped[sorted];
            result->push_back(strs[i]);
        }

        vector<vector<string>> results;

        for(auto& group : grouped){
            results.push_back(group.second);
        }

        return results;
    }
};
