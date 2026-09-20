class Solution:
    def reverseDegree(self, s: str) -> int:
        total_sum = 0
        
        for i, char in enumerate(s, 1):
            rev = 26 - (ord(char) - ord('a'))
            total_sum += rev * i
            
        return total_sum