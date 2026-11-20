class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x;
        int i = 0;
        while (i < nums.size()) {
            x = target - nums[i];
            for (int j = 0; j < nums.size() && j != i; j++) {
                if (x == nums[j]) {
                    return {i, j};
                }

            }
            i++;
        }
        return {0, 0};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna