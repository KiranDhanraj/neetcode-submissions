class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> num_letter_s;
        unordered_map<char, int> num_letter_t;

        if(t.size() != s.size()) {
            return false;
        }
        for(int i =0; i < s.size(); i++) {
            num_letter_s[s[i]]++;
        }
        for(int i =0; i < t.size(); i++) {
           num_letter_t[t[i]]++;
        }  
        for(int i =0; i < s.size(); i++) {
            if(num_letter_s[s[i]] != num_letter_t[s[i]]){
                return false;
            }
        }
        return true;

    }
};
