
class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int index) {
        
        // Base case
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            
            // Swap current element with index
            swap(nums[index], nums[i]);

            // Recursive call
            solve(nums, ans, index + 1);

            // Backtracking: undo the swap
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna