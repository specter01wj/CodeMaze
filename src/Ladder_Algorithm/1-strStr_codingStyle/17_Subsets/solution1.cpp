class Solution {
public:
    /**
     * @param S: A set of numbers.
     * @return: A list of lists. All valid subsets.
     */
    vector<vector<int> > subsets(vector<int> &nums) {
        // write your code here
        vector<vector<int> > result;
        vector<int> list;

        std::sort(nums.begin(), nums.end())
        subsets_helper(result, list, nums, 0);

        return result;
    }

    // recursion
    void subsets_helper(vector<vector<int> > &result, vector<int> list, vector<int> &nums, int index) {
        result.push_back(list);

        for (int i = index; i < nums.size(); ++i) {
            list.push_back(nums[i]);
            subsets_helper(result, list, nums, i + 1);
            list.pop_back();
        }
    }
};