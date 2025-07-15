class Solution:
    def isValid(self, word: str) -> bool:
        a="qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNM"
        b="aeiouAEIOU"
        c="0123456789"
        if(len(word)<3):
            return False
        cons=0
        vowel=0
        dig=0
        for i in word:
            if i in a:
                cons+=1
            elif i in b:
                vowel+=1
            elif i in c:
                dig+=1
            else:
                return False
        if(cons==0 or vowel==0):
            return False
        return True
        