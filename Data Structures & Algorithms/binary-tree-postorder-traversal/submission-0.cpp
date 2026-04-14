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
        vector<int>result;
        if(root==nullptr)return result;

        stack<TreeNode*>s1;
        stack<TreeNode*>s2;

        s1.push(root);

        while(!s1.empty()){
            TreeNode* newNode = s1.top();
            s1.pop();
            s2.push(newNode);

            if(newNode->left)s1.push(newNode->left);
            if(newNode->right)s1.push(newNode->right);

        }

        while(!s2.empty()){
            result.push_back(s2.top()->val);
            s2.pop();
        }
        return result;

        
    }
};