class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        subset = []
        def tao_subset(i):
            if (i == len(nums)):
                res.append(subset[:])
                return
            subset.append(nums[i])
            tao_subset(i+1)
            subset.pop()
            tao_subset(i+1)
        tao_subset(0)
        return res