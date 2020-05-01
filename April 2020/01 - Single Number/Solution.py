class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        no_dupl = [];
        for i in nums:
            if(i not in no_dupl):
                no_dupl.append(i)
            else:
                no_dupl.remove(i)
        return no_dupl.pop()