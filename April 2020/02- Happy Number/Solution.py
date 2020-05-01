class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        num = set()
        while(n not in num):
            num.add(n)
            n = sum(int(i)**2 for i in str(n))
        return n == 1