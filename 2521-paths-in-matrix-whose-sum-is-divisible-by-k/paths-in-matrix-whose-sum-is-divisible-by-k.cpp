class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        const int MOD = 1000000007;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> prev(cols, vector<int>(k, 0));
        for (int r = 0; r < rows; r++) {
              vector<vector<int>> curr(cols, vector<int>(k, 0));
            for (int c = 0; c < cols; c++) {
                int cell = grid[r][c];
                if (r == 0 && c == 0) {
                    curr[0][cell % k] = 1;
                    continue;
                }
                for (int rem = 0; rem < k; rem++) {
                    long long count = 0;
                    if (r > 0) count += prev[c][rem];
                    if (c > 0) count += curr[c-1][rem];
                    if (count == 0) continue;
                    int newRem = (rem + cell) % k;
                    curr[c][newRem] = (curr[c][newRem] + count) % MOD;
                }
            }

            prev.swap(curr);
        }
        return prev[cols - 1][0];  
    }
};