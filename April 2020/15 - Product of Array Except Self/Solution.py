class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = [1] * len(nums)
        
        L = 1
        R = 1
        
        for i in range(len(nums)):
            ans[i] *= L;
            ans[-1-i] *= R;
            L *= nums[i]
            R *= nums[-1-i]
        
        return ans