class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size());
        for(int num: nums) {
            if(prefix.size() == 0) {
                prefix.push_back(num);
            } else {
                prefix.push_back(num * prefix.back());
            }

        }
        suffix[nums.size() -1] = nums[nums.size() -1 ];
        for(int i= nums.size() -2; i >= 0; i--) {
            
            suffix[i] = nums[i] * suffix[i + 1];
            
        }
        vector<int> output;
        for(int i =0; i < nums.size(); i++) {
            if(i == 0) {
                output.push_back(suffix[i + 1]); 
            } else if(i == nums.size() - 1) {
                output.push_back(prefix[i - 1]);
            } else {
                output.push_back(prefix[i - 1] * suffix[i + 1]);
            }
        }
        return output;
    }
};
