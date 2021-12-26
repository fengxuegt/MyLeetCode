/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int hight(TreeNode *node) {
        if (node == nullptr) {
            return 0;
        }
        int l = hight(node->left);
        int r = hight(node->right);
        return max(l, r) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        int l = hight(root->left);
        int r = hight(root->right);
        return abs(l - r) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};
// @lc code=end

