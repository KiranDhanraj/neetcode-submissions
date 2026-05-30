class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int num_0s = count(nums.begin(), nums.end(), 0);
        for(int num: nums) {
            if(prefix.size() == 0) {
                prefix.push_back(num);
            } else {
                prefix.push_back(num * prefix.back());
            }

        }
        for(int i= nums.size() -1; i >= 0; i--) {
            if(i == nums.size() - 1) {
                suffix.insert(suffix.begin(), nums[i]);
            } else {
                suffix.insert(suffix.begin(), nums[i] * suffix[0]);
            }
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
