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
    vector<vector<int>> pathSum(TreeNode* root, int target) {
    
        vector<vector<int>> re;
vector<int> current;
        int sum =0;
        find(re,sum,target,root,current);
        return re;
    }
    
  void find(vector<vector<int>> &re ,int sun ,int target,TreeNode * root,vector<int> current)

{
if(!root) return ;

int t = root->val;

current.push_back(t);

sum+=t;

if(!root->left && !root->right)
 {

//int t = root->val;

//sum+=t;
//if(sum==target){

//current.push_back(root->val);
if(sum == target)
re.push_back(current);

}


if(root->left)
  {

//current.push_back(root->left->val);
find(re ,sun , target, root->left, current);


}
if(root->right)

find(re,sum,target,root->right,current)


}

}  
    
    
};
