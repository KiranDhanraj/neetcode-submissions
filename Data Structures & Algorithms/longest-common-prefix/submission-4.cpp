class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        char cur_char = ' ';
        string prefix {""};
        while(true) {
             
            for(int j = 0; j < strs.size(); j++) {
                if(i == strs[j].size()) {
                    return prefix;
                }
                if(j == 0) {
                    cur_char = strs[j][i];
                } else if (strs[j][i] != cur_char) {
                    return prefix;
                }

            }
            prefix.push_back(cur_char);
            cur_char = ' ';
            i++;
        }
        return prefix;
    }
};