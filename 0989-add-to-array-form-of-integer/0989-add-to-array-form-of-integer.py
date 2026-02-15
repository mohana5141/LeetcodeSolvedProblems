class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        n = len(num) - 1
        carry = 0
        result = []

        while n >= 0 or k > 0 or carry > 0:

            digit1 = num[n] if n >= 0 else 0
            digit2 = k % 10

            total = digit1 + digit2 + carry

            result.append(total % 10)
            carry = total // 10

            k //= 10
            n -= 1

        return result[::-1]
