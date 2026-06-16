class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted = strs;
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> output;
        
        for(int i =0; i < strs.size(); i++) {
            sort(sorted[i].begin(), sorted[i].end());
            anagrams[sorted[i]].push_back(strs[i]);

        }

        for (auto& pair : anagrams) {
            output.push_back(pair.second);
        }

        return output;
        
    }
};
