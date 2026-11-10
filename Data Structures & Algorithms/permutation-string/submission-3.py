class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if(len(s2) < len(s1)):
            return False
        start = 0
        end = len(s1)
        empty = 26 * [0]
        seen = 26 * [0]
        for c in s1:
            seen[ord(c) - ord('a')] += 1
        for i in range(len(s1)):
            seen[ord(s2[i]) - ord('a')] -=1
        
        while(end < len(s2)):
            if(seen == empty):
                return True
            seen[ord(s2[start]) - 97 ] += 1
           
            seen[ord(s2[end]) - 97] -= 1
            start+=1
            end +=1
        if(seen == empty):
            return True
        return False

            
        

