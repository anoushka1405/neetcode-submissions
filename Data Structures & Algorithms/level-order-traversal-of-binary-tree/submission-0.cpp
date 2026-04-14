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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)return result;

        queue<TreeNode* >q;
        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();
            vector<int>current;

            for(int i = 0; i<levelSize; i++){
                TreeNode* newNode = q.front();
                q.pop();
                current.push_back(newNode->val);

                if(newNode->left)q.push(newNode->left);
                if(newNode->right)q.push(newNode->right);
            }
            result.push_back(current);         
        }
        return result;

        
    }
};
