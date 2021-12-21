/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;
        while (i < j) {
            if (nums[i] * nums[i] >= nums[j] * nums[j]) {
                res[k--] = nums[i] * nums[i];
                i++;
            } else {
                res[k--] = nums[j] * nums[j];
                j--;
            }
        }
        res[0] = nums[i] * nums[i];
        return res;
    }
};
// @lc code=end

