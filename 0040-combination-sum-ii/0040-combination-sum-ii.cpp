
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& candidates, int target, int start) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Skip duplicate elements at the same level
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted, no need to check further
            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);

            // i + 1 because each element can be used only once
            solve(candidates, target - candidates[i], i + 1);

            // Backtracking
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0);

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna