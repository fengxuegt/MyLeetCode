/* ************************************************************************
> File Name:     977有序数组的平方.cpp
> Author:        fengxuegt
> blog:          fengxuegt.github.io
> Created Time:  2021年11月04日 星期四 00时17分00秒
> Description:   
 ************************************************************************/
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
