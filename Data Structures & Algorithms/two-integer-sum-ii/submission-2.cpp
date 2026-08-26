class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        
        int first = 0;
        int second = numbers.size() - 1;

        for(int i = 0; i < numbers.size(); i++){
            int current = numbers[first] + numbers[second];

            if(current < target){
                first++;
            }
            else if(current > target){
                second--;
            }
            
            if(current == target){
                result.push_back(first + 1);
                result.push_back(second + 1);
                break;
            }
        }

        return result;
    }
};
