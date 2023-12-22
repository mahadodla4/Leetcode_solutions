class Solution:
    def maxScore(self, s: str) -> int:
        l=[]
        n=len(s)
        for i in range(1,n):
            a=s[:i]
            b=s[i:]
            c=a.count('0')+b.count('1')
            l.append(c)
        print(l)
        return max(l)
        