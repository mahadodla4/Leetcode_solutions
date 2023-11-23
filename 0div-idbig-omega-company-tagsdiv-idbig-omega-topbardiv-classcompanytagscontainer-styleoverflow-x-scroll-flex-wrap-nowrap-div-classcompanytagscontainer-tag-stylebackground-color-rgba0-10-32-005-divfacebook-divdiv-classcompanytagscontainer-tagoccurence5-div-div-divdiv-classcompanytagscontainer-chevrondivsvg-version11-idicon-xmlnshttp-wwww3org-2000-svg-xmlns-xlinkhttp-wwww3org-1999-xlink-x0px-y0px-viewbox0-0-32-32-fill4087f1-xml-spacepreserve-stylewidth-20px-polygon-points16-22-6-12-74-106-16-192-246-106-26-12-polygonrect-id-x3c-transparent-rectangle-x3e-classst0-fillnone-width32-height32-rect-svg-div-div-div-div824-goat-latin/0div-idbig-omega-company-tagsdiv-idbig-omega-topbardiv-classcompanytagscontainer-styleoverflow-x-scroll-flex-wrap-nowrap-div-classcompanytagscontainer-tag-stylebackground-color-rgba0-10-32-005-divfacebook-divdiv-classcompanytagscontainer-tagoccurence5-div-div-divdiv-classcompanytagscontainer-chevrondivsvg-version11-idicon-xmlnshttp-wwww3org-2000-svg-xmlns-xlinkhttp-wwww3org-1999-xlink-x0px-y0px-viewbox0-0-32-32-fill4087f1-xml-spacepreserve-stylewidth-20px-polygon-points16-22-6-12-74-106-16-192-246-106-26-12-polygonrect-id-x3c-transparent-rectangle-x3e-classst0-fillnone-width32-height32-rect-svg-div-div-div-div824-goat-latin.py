class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        def vowel(a):
            if a in "aeiouAEIOU":
                return 1
            return 0
        s=sentence.split(" ")
        s1=""
        res=""
        for i in range(len(s)):
            a=s[i]
            if(vowel(a[0])):
                s1+=a
                s1+="ma"
            if not vowel(a[0]):
                b=a[0]
                for j in range(1,len(a)):
                    s1+=a[j]
                s1+=b
                s1+="ma"
            res='a'*(i+1)
            s1+=res
            s1+=" "
        return s1[:-1]
        