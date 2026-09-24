class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<string> ans(n);

        vector<int> indices(n);

        iota(indices.begin(), indices.end(), 0);

        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return score[a] > score[b];
        });

        for (int i = 0; i < n; i++) {
            int index = indices[i];

            if (i == 0)
                ans[index] = "Gold Medal";
            else if (i == 1)
                ans[index] = "Silver Medal";
            else if (i == 2)
                ans[index] = "Bronze Medal";
            else
                ans[index] = to_string(i + 1);
        }

        return ans;
    }
};