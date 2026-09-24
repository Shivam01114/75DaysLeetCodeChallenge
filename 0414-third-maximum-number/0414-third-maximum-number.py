class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        sort = sorted(set(nums))
        rev = sort[::-1]
        if len(rev) >= 3:
            return rev[2]
        else:
            return max(rev)
