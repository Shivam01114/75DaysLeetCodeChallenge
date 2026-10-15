
class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:
        result = []
        subset = []

        def backtrack(index):
            if index == len(nums):
                result.append(subset.copy())
                return

            subset.append(nums[index])
            backtrack(index + 1)

            subset.pop()
            backtrack(index + 1)

        backtrack(0)
        return result
