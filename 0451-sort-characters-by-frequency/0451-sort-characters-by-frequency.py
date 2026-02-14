from collections import Counter

class Solution:
    def frequencySort(self, s: str) -> str:
        count = Counter(s)

        items = sorted(count.items(), key=lambda x: x[1], reverse=True)

        result = ""

        for ch, freq in items:
            result += ch * freq

        return result
