class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n <= 0:
            return False
        if n==1:
            return True
        i=2
        while(n>=i):
            if n%2!=0:
                return False
            n=n/2
        return True
    
