class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int c, r = grid.size(), ans = 0;
        if(r)
            c = grid[0].size();
        for(int i  = 0; i < r; ++i) {
            for(int j = 0; j < c; ++j) {
                if(grid[i][j] == '1') {
                    ans++;
                    findIsland(i, j, grid);
                }
            }
        }
        return ans;
    }
private:
    void findIsland(int x, int y, vector<vector<char>>& grid) {
        int r = grid.size(), c = grid[0].size(); 
        if(x < 0 or y < 0 or x >= r or y >= c or grid[x][y] == '0')
            return;
        grid[x][y] = '0';
        int x_axis[4] = {0, 1, 0, -1}, y_axis[4] = {-1, 0, 1, 0};
        for(int i = 0; i < 4; ++i)
            findIsland(x + x_axis[i], y + y_axis[i], grid);
    }
};