/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> preOrder;
        stack<TreeNode*> travel;
        if (root != NULL) {
            travel.push(root);
        }
        while (!travel.empty()) {
            TreeNode *p = travel.top();
            travel.pop();
            preOrder.push_back(p->val);
            if (p->right != NULL) {
                travel.push(p->right);
            }
            if (p->left != NULL) {
                travel.push(p->left);
            }
        }
        return preOrder;
    }
};
