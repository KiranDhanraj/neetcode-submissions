class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int prod_wtht_0 = 1;
        int num_0s = count(nums.begin(), nums.end(), 0);
        for(int num: nums) {
            if(num != 0) {
            prod_wtht_0 *= num;

            }
            product *= num;
        }
        vector<int> output;
        for(int num: nums) {
            if(num == 0 && num_0s == 1) {
                output.push_back(prod_wtht_0);
            } else if (num_0s > 1){
                output.push_back(0);

            } else{
                output.push_back(product / num);
            } 

        }
        return output;
    }
};
