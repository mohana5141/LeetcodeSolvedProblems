from collections import Counter
class Solution:
    def toggleLightBulbs(self, bulbs: list[int]) -> list[int]:
        ls=[]
        freq=Counter(bulbs)
        for key,value in freq.items():
            if value%2!=0:
                ls.append(key)
        ls.sort()
        return ls
