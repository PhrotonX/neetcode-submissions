class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxCount = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                int count = dfs(grid, i, j);

                if(maxCount < count){
                    maxCount = count;
                }
            }
        }

        return maxCount;
    }

    int dfs(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()){
            return 0;
        }

        int count = 0;

        if(grid[r][c] == 0){
            return 0;
        }else{
            grid[r][c] = 0;
            count++;
        }

        count += dfs(grid, r - 1, c);
        count += dfs(grid, r, c + 1);
        count += dfs(grid, r + 1, c);
        count += dfs(grid, r, c - 1);

        return count;
    }
};
