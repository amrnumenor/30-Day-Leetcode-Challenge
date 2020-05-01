class Solution:
    def leftMostColumnWithOne(self, binaryMatrix: 'BinaryMatrix') -> int:
        n, m = binaryMatrix.dimensions()
        leftmost = right = m
        
        for i in range(n):
            left = 0
            while left < right:
                mid = left + (right - left) // 2
                if(binaryMatrix.get(i, mid)):
                    right = mid
                else:
                    left = mid + 1
            leftmost = left
        
        return -1 if leftmost == m else leftmost