class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        previousGroup = 0
        currentGroup = 1
        count = 0
        for i in range(len(s)-1):
            if s[i]==s[i+1]:
                currentGroup +=1
            else:
                previousGroup = currentGroup
                currentGroup = 1
            if previousGroup >= currentGroup:
                count +=1
        return count
        