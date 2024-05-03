class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=version1.split('.')
        v2=version2.split('.')
        a=[]
        b=[]
        for i in v1:
            a.append(int(i))
        for i in v2:
            b.append(int(i))
        A=len(a)
        B=len(b)
        c=max(A,B)
        for i in range(c-A):
            a.append(0)
        for i in range(c-B):
            b.append(0)
        # print(a)
        # print(b)
        for i in range(c):
            if(a[i]<b[i]):
                return -1
            if(a[i]>b[i]):
                return 1
        return 0
        