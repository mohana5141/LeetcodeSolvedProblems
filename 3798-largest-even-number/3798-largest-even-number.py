class Solution(object):
    def largestEven(self, s):
        length = len(s) - 1
        ind = -1
        for i in range(length, -1, -1):
            if s[i] == '2':
                ind = i
                break
        
        return s[0:ind+1]