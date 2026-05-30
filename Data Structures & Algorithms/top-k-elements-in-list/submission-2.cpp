class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> num_dupes;
        for(auto num: nums) {
            num_dupes[num]++;
        }
        vector<pair<int, int>> l;
        vector<int> output;
        for(auto& pair : num_dupes) {
            l.push_back(pair);
        }
        sort(l.begin(), l.end(),
     [](const auto& a, const auto& b) {
         return a.second < b.second;
     });
        for(int i = static_cast<int>(l.size()) - 1; i > static_cast<int>((l.size()) - 1 -k); i--) {
            output.push_back(l[i].first);
        }
        return output;

    }
};
