class Solution(object):
    def missingNumber(self, nums):
        n = len(nums)
        s = sum(nums)
        sn = n*(n+1)/2
        
        missing = sn - s
        
        return missing