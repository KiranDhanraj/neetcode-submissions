class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        end = 0
        length = 0
        maxLength = 0
        strLen = len(s)
        count = defaultdict(int)
        while(end < strLen):
            if(count[s[end]] ==0):
                length+=1
                count[s[end]] +=1
                end+=1
            else:
                maxLength = max(length, maxLength)
                count[s[start]] -= 1
                length -= 1
                start+=1
        return max(maxLength, length)

