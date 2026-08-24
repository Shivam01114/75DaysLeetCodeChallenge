class Solution:
    def countDigits(self, num: int) -> int:
        temp = num
        count = 0
        while(temp>0):
            r = temp%10
            if num%r==0:
                count+=1
            temp = temp//10
        return count

        
