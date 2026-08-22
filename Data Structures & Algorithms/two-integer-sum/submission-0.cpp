class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> results;

        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i; j < nums.size() - 1; j++){
                if(nums[i] + nums[j+1] == target){
                    results.push_back(i);
                    results.push_back(j + 1);

                    return results;
                }
            }
        }

        return results;
    }
};
