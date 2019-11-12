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
        if(!root) return {};
        if(!root->left &&!root->right) return {root->val};
        vector<int> re;
        vector<TreeNode*> node;
        TreeNode *first =root;
        while(!node.empty() || first)
        {
            while(first)
            {
                node.push_back(first);
                first=first->left;
            }
            first = node.back();
            TreeNode  *second =NULL;
            while(!node.empty() && (!first->right || first->right == second))
            {
                    re.push_back(first->val);
                    second=first;
                    
                    node.pop_back();
                    if(node.empty()) return re;
                    first=node.back();


            }

            if(node.empty()) return re;

            first=first->right;



        }
        



        return re;

    }

    void postfun(vector<int> &re,TreeNode * root)
    {
        if(!root) return ;
        postfun( re,    root->left);
        postfun( re,    root->right);
        re.push_back(root->val);


    }
};