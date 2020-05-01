class Solution {
public:
    int dp[1001][1001];
    
    int solve(vector<vector<int>>& grid, int m, int n, int r, int c) {
        if(dp[r][c] != -1)
            return dp[r][c];
        int sumA = INT_MAX, sumB = INT_MAX;
        if(r + 1 < m)
            sumA = solve(grid, m, n, r + 1, c);
        if(c + 1 < n)
            sumB = solve(grid, m, n, r, c + 1);
        dp[r][c] = grid[r][c] + min(sumA, sumB);
        return dp[r][c];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        memset(dp, -1, sizeof dp);
        dp[m-1][n-1] = grid[m-1][n-1];
        return solve(grid, m, n, 0, 0);
    }
};