class Solution:

    def encode(self, strs: List[str]) -> str:
        output = ""
        for string in strs:
            output += str(len(string))
            output+= "#"
            output += string
        return output
            

    def decode(self, s: str) -> List[str]:
        output = []
        i = 0
        strLength = len(s)
        while i < strLength:
            length = ""
            string = ""
            while s[i] != "#":
                length += s[i]
                i += 1
            if s[i] == "#":
                i +=1
            intLength = int(length)
            while intLength > 0:
                string +=s[i]
                i+=1
                intLength += -1
            output.append(string)
        return output
            





