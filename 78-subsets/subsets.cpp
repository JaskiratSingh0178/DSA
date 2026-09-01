class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int i, vector<int>& nums, vector<int>& temp) {

        // All elements processed
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Take nums[i]
        temp.push_back(nums[i]);
        dfs(i + 1, nums, temp);

        // Undo
        temp.pop_back();

        // Don't take nums[i]
        dfs(i + 1, nums, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;

        dfs(0, nums, temp);

        return ans;
    }
};