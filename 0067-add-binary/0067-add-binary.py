class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res=int(a,2)+int(b,2)
        bin_res=bin(res)
        return bin_res[2:]