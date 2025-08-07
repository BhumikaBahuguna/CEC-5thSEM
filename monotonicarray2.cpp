class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.back() - nums.front() < 0) {
            reverse(nums.begin(), nums.end());
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i+1]) {
                return false;
            }
        }
        return true;
    }
};
