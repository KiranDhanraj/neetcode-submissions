class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        for string in strs:

            key = str(sorted(string))
            groups[key].append(string)
        values = list(groups.values())
        return values

        