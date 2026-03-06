class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        ones_cnt = 0
        zeroes_cnt = 0
        long_seg1 = 0
        long_seg0 = 0

        for i in range(len(s)):
            if s[i] == '1':
                ones_cnt += 1
            else:
                long_seg1 = max(long_seg1, ones_cnt)
                ones_cnt = 0

        long_seg1 = max(long_seg1, ones_cnt)

        for i in range(len(s)):
            if s[i] == '0':
                zeroes_cnt += 1
            else:
                long_seg0 = max(long_seg0, zeroes_cnt)
                zeroes_cnt = 0

        long_seg0 = max(long_seg0, zeroes_cnt)

        return long_seg1 > long_seg0