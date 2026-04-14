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
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* current = root;
        stack<TreeNode*> st;
        vector<int>result;
        TreeNode* curr = root;

        if(!root)return result;

        st.push(curr);

        while(!st.empty()){
            curr = st.top();
            st.pop();
            result.push_back(curr->val);

            if(curr->right)st.push(curr->right);
            if(curr->left)st.push(curr->left);

        }
        return result;

       

        
    }
};