class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        broken = set(brokenLetters)
        count = 0

        for word in text.split():
            can_type = True
            for ch in word:
                if ch in broken:
                    can_type = False
                    break
            if can_type:
                count += 1

        return count
