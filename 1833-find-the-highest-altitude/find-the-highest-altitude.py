class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        l = []
        a = 0
        l.append(a)
        for i in range(len(gain)):
            a += gain[i]
            l.append(a)
        
        return  max(l)       