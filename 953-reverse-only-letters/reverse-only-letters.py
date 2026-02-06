class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        l = []
        left = len(s)-1

        for i in s:
            if i.isalpha():
                while not s[left].isalpha():
                    left -=1
                l.append(s[left])
                left -=1
            else:
                l.append(i)
            
        newS = ''.join(l)
        return newS
        