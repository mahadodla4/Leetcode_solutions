class Solution:
    def calPoints(self, operations: List[str]) -> int:
        l=[]
        c=0
        for i in range(0,len(operations)):
            if operations[i] not in "CD+":
                l.append(int(operations[i]))
                c+=1
            if(operations[i]=='C'):
                l.remove(l[c-1])
                c-=1
            if(operations[i]=='D'):
                l.append(2*l[c-1])
                c+=1
            if(operations[i]=='+'):
                l.append(l[c-2]+l[c-1])
                c+=1
        a=sum(l)
        return a
            