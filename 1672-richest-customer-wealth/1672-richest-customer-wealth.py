class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        maxi = 0
        for customer in accounts:
            total = sum(customer)
            maxi = max(maxi,total)
        return maxi
        