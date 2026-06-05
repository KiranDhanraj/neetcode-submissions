class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int start = 0;
       int end = numbers.size() -1;
       while(start < end) {
        if(numbers[start] + numbers[end] == target) {
            return vector<int> {++start, ++end};
        } else if(numbers[start] + numbers[end] <= target) {
            start++;
        } else if (numbers[start] + numbers[end] >= target) {
            end--;
        }
       }
       return {0, 0};

        
    }
};
