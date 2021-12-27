/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr) {
            return res;
        }
        
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            TreeNode *cur = st.top();
            res.push_back(cur->val);
            st.pop();
            if (cur->left)
            st.push(cur->left);
            if (cur->right)
            st.push(cur->right);

        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

