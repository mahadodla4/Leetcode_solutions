class Solution:
    def judgeCircle(self, moves: str) -> bool:
        U,D,R,L=0,0,0,0
        for i in moves:
            if(i=='U'):
                U+=1
            elif(i=='R'):
                R+=1
            elif(i=='D'):
                D-=1
            elif(i=='L'):
                L-=1
        if(U+D==0 and L+R==0):
            return 1
        else:
            return 0
            