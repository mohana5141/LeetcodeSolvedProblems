class Solution:
    def sumDivisibleByK(self, nums: List[int], k: int) -> int:
        freq={}
        t_sum=0
        for i in nums:
            freq[i]=freq.get(i,0)+1
        for key,value in freq.items():
            if value%k==0:
                t_sum+=key*value
        return t_sum