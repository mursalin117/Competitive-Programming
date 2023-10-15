class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxVal = 0
        for i in range(0, len(accounts)):
            total = 0
            for j in range(0, len(accounts[i])):
                total += accounts[i][j]
            maxVal = max(maxVal, total)
        return maxVal

        # return max([sum(x) for x in accounts])
        # return max(sum(account)for account in accounts)
        # return max(map(sum, accounts))

        # maxVal = 0
        # for i in accounts:
        #     total = 0
        #     for j in i:
        #         total += j
        #     maxVal = max(maxVal, total)
        # return maxVal

