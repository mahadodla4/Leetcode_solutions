#User function Template for python3

class Solution:
    def permutation(self,s):
        from itertools import permutations
        l=[]
        for i in permutations(s):
            a=''.join(i)
            l.append(a)
        return sorted(l)
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    T=int(input())
    while(T>0):
        s=input()
        ob=Solution()
        ans=ob.permutation(s)
        for i in ans:
            print(i,end=" ")
        print()
        
        T-=1
# } Driver Code Ends