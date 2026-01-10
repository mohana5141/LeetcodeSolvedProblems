class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        diff=set()
        li=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        for word in words:
            s=""
            for ch in range(len(word)):
                s+=li[ord(word[ch])-ord('a')]
            diff.add(s)
        return len(diff)


