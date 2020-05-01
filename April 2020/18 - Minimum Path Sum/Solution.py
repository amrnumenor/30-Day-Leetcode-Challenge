class Solution(object):
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        rows = len(grid)
        cols = len(grid[0])
        
        for r in xrange(1,rows):
            grid[r][0] += grid[r-1][0]
            
        for c in xrange(1,cols):
            grid[0][c] += grid[0][c-1]
            
        for i in xrange(1,rows):
            for j in xrange(1,cols):
                grid[i][j] += min(grid[i-1][j], grid[i][j-1])
        
        return grid[-1][-1]