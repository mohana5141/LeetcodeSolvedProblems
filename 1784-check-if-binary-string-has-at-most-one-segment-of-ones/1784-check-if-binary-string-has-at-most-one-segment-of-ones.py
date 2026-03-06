class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        seg=0
        ones_cnt=0
        s+='0'
        for i in range(len(s)):
            if s[i]=='1':
                ones_cnt+=1
            elif s[i]=='0':
                if ones_cnt>0:
                    seg+=1
                    ones_cnt=0
                
        return seg<=1



        