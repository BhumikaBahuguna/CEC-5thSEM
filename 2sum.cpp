#include <iostream>
#include <vector>
using namespace std;
pair<int, int> twoSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {nums[left], nums[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {-1, -1};  // if no pair found
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 6, 8, 11};  // must be sorted
    int target = 10;
    pair<int, int> result = twoSum(nums, target);
    if (result.first != -1)
        cout << "Pair found: " << result.first << " + " << result.second << " = " << target << endl;
    else
        cout << "No valid pair found." << endl;
    return 0;
}
