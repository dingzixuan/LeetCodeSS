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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> postOrder;
        stack<TreeNode*> travel;
        TreeNode *p = root;
        TreeNode *pre = NULL;
        if (root == NULL) return postOrder;
        travel.push(root);
        while(!travel.empty()) {
            p = travel.top();
            if ((p->left == NULL && p->right == NULL) || ((pre == p->left || pre == p->right) && pre != NULL)) {
                postOrder.push_back(p->val);
                travel.pop();
                pre = p;
            }
            else {
                if (p->right != NULL) travel.push(p->right);
                if (p->left != NULL) travel.push(p->left);
            }
        }
    }
};
