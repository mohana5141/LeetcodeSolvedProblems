from collections import Counter
from typing import List
import math

class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        freq = Counter(nums)
        final_sum = 0

        for n, count in freq.items():
            div_sum = 1 + n
            div_count = 2

            for i in range(2, int(math.sqrt(n)) + 1):
                if n % i == 0:
                    j = n // i
                    if i == j:
                        div_count += 1
                        div_sum += i
                    else:
                        div_count += 2
                        div_sum += i + j

                if div_count > 4:
                    break

            if div_count == 4:
                final_sum += div_sum * count

        return final_sum
