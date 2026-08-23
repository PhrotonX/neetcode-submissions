class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> results;
        // number, count
        map<int, int> frequency;
        vector<pair<int, int>> sorted;

        for(auto& num : nums){
            frequency[num]++;
        }

        for(auto& freq : frequency){
            sorted.push_back(freq);
        }

        sort(sorted.begin(), sorted.end(), compare);

        for(int i = 0; i < k; i++){
            results.push_back(sorted[i].first);
        }

        return results;
    }

    static bool compare(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
};
