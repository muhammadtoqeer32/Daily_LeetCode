class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;
        map<vector<int>, int> mp;

      for (int i = 0; i < n; i++) {
            mp[grid[i]]++;
        }

         for (int j = 0; j < n; j++) {
            vector<int> temp;
            for (int i = 0; i < n; i++) {
                temp.push_back(grid[i][j]); 
            }
            count += mp[temp];
        }

        return count;
    }
};