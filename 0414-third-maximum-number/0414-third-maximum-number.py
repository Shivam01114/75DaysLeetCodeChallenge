class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        largest = float("-inf")
        second = float("-inf")
        third = float("-inf")

        for num in nums:
            if num > largest:
                third = second
                second = largest
                largest = num
            elif num > second and num!=largest:
                third = second
                second = num
            elif num>third and num!=largest and num!=second:
                third = num
        if third == float("-inf"):
                return largest
        return third



        