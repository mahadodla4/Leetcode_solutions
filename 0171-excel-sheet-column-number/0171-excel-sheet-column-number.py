class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        s=columnTitle
        m=[]
        sum,j=0,0
        l=list(s)
        l=l[::-1]
        for i in l:
            r=ord(i)-64
            sum+=r*(26**j)
            j+=1
        return sum 
        
        