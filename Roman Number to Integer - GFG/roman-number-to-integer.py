#User function Template for python3

class Solution:
    def romanToDecimal(self, S):
        s=S
        roman= {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        sum = 0
        s=s.replace("IV","IIII")
        s=s.replace("IX","VIIII")
        s=s.replace("XL","XXXX")
        s=s.replace("XC","LXXXX")
        s=s.replace("CD","CCCC")
        s=s.replace("CM","DCCCC")
        for char in s:
            sum += roman[char]
        return sum


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for _ in range(t):
        ob = Solution()
        S = input()
        print(ob.romanToDecimal(S))
# } Driver Code Ends