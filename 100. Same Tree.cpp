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
   bool is_SameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL || q == NULL) return (p == q);
        return (p->val == q->val && is_SameTree(p->left, q->left) && is_SameTree(p->right, q->right));
    }
};

