class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> difference;
    vector<int> output(2);

     for(int i = 0; i < nums.size(); i++) {
        if(difference[target - nums[i]] != 0) {
            output[1] = i;
            output[0] = difference[target - nums[i]] - 1;
            return output;
        }
        difference[nums[i]] = i + 1;


     }
     return output;
    }
};