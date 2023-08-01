class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        from itertools import combinations
        l=[]
        m=[]
        for i in range(1,n+1):
            l.append(i)
        com=combinations(l,k)
        com=list(com)
        for i in com:
            m.append(i)
        return m
