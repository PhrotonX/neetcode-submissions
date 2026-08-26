public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        var result = new List<int>();

        int first = 0;
        int second = numbers.Count() - 1;

        for(int i = 0; i < numbers.Count(); ){
            
            int current = numbers[first] + numbers[second];

            if(current < target){
                first++;
            }
            else if(current > target){
                second--;
            }
            
            if(current == target){
                result.Add(first + 1);
                result.Add(second + 1);
                break;
            }
        }

        return result.ToArray();
    }
}
