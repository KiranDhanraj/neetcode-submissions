class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted = strs;
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> output;
        
        for(int i =0; i < strs.size(); i++) {
            sort(sorted[i].begin(), sorted[i].end());
        }
        unordered_set<string> unqiue_sorted(sorted.begin(), sorted.end());

        for(int i =0; i < strs.size(); i++) {
            anagrams[sorted[i]].push_back(strs[i]);
        }
        for(auto item : unqiue_sorted) {
            output.push_back(anagrams[item]);

        }
        return output;
        
    }
};
