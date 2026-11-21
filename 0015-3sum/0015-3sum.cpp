class Solution {
public:
       vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());  // Step 1: Sort the array
    
    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicate values for i
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        int left = i + 1, right = nums.size() - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                res.push_back({nums[i], nums[left], nums[right]});
                
                // Skip duplicates for left
                while (left < right && nums[left] == nums[left + 1]) left++;
                // Skip duplicates for right
                while (left < right && nums[right] == nums[right - 1]) right--;
                
                left++;
                right--;
            } 
            else if (sum < 0) {
                left++;  // Need bigger sum
                } 
            else {
                right--; // Need smaller sum
            }
        }
    }
    return res;
}
    
    
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna