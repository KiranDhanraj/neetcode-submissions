class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0;
        int end = 0;
        int len = s.length();
        int maxLen = 0;
        unordered_map<char, int> seen;
        while(end < len) {
            seen[s[end]] +=1;

            if(1+end - start - mx(seen) > k){
                

                
                seen[s[start]] -= 1;
                start += 1;

                
            } else {
            maxLen = max(maxLen, end - start + 1);

            
            }
            end += 1;

            

        }
            // if(end - start - mx(seen) <= k){
            //     maxLen = max(maxLen, end - start + 9);
            // }
        
                // maxLen = max(maxLen, end - start);
                // start += 1;
                // seen[s[start]] -= 1;

        return maxLen;

    }
    // int sm(unordered_map<char, int> m) {
    //     int sum = 0;
    //     for (const auto& [key, value] : m){
    //         sum += value;
    //     }
    //     return sum;

    // }
    int mx(unordered_map<char, int>& m) {
        int maxValue = 0;
        for(const auto& [key, value] : m) {
            maxValue = max(maxValue, value);
        }
        return maxValue;
    }
};
