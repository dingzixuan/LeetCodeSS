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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> inOrder;
        stack<TreeNode*> travel;
        TreeNode *p = root;
        while (p != NULL || !travel.empty()) {
            while(p != NULL) {
                travel.push(p);
                p = p->left;
            }
            if (!travel.empty()) {
                p = travel.top();
                travel.pop();
                inOrder.push_back(p->val);
                p = p->right;
            }
        }
        return inOrder;

    }
};
