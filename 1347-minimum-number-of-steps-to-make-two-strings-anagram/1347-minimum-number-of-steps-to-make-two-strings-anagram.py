from collections import Counter

class Solution:
    def minSteps(self, s: str, t: str) -> int:
        count_s = Counter(s)
        count_t = Counter(t)

        steps = 0

        for ch in count_t:  
            if count_t[ch] > count_s.get(ch, 0):
                steps += count_t[ch] - count_s.get(ch, 0)

        return steps
