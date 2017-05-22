class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        int n = nums.size();
        permuteHelper(results, nums, n-1);
        
        return results;
    }
private:
    void permuteHelper(vector<vector<int>> &results, vector<int> path, int n) {
        if (n == 0) results.push_back(path);
        
        for (int i = 0; i <= n; ++i) {
            swap(path[i], path[n]);
            permuteHelper(results, path, n - 1);
            swap(path[i], path[n]);
        }
    }
};