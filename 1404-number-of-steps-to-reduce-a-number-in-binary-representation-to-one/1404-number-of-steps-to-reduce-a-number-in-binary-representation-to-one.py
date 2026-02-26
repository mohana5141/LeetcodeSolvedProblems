class Solution:
    def numSteps(self, s: str) -> int:
        res=int(s,2)
        cnt=0
        while res>1:
            if res%2!=0:
                res+=1
                cnt+=1
            else:
                res//=2
                cnt+=1
        if res==1:
            return cnt

        