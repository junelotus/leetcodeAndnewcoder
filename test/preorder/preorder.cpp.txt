/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(!root) return {};
        if(!root->left && !root->right) return {root->val};
        vector<TreeNode *> node;
        vector<int> re;
        TreeNode *first = root;
        while(first||!node.empty())
        {
            while(first)
            {
                re.push_back(first->val);
                node.push_back(first);
                first=first->left;
            }
            first =node.back();
            while(!node.empty() &&!first->right)
            {
                node.pop_back();
                if(node.empty()) return re;
                first =node.back();
            }
            if(node.empty()) return re;
            node.pop_back();
            first=first->right;


        }
return re;

    }
};