class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        res=bin(n)
        flag=True
        for i in range(len(res)-1):
            if res[i]==res[i+1]:
                flag=False
                break
        return flag


        