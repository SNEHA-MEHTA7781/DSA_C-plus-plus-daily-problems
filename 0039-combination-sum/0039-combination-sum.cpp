
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& candidates, int target, int index) {

        // Target achieved
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // Try all candidates from current index
        for (int i = index; i < candidates.size(); i++) {

            if (candidates[i] > target)
                continue;

            // Choose the current element
            temp.push_back(candidates[i]);

            // Same index because we can reuse the element
            solve(candidates, target - candidates[i], i);

            // Backtrack
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        solve(candidates, target, 0);

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna