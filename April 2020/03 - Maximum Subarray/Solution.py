class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        windowSum = nums[0]
        maxSum = nums[0]
        for num in range(1,len(nums)):
            windowSum = max(windowSum + nums[num], nums[num])
            maxSum = max(maxSum, windowSum)
        return maxSum