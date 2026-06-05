class Solution {
public:
    bool isPalindrome(string s) {
        int str_len = s.size();
        int start = 0;
        int end = str_len -1;
        while(start < end) {
            if(!isalnum(s[start])) {
                start++;
                continue;
            }
            if(!isalnum(s[end])) {
                end--;
                continue;
            }
            if(tolower(s[end]) != tolower(s[start])){
                cout << start;
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
