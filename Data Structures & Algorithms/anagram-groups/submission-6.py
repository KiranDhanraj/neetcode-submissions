class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        for string in strs:
            key = 0

            for char in string:
                key += 10 **(ord(char) - 1)
            groups[key].append(string)
        values = list(groups.values())
        return values

        