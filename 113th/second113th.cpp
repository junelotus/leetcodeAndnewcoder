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
//     vector<vector<int>> pathSum(TreeNode* root, int target) {

//         vector<vector<int>> re;
//         vector<int> current;
//         int sum =0;
//         find(re,sum,target,root,current);
//         return re;
//     }
    
    vector<vector<int>> pathSum(TreeNode* root, int target) 
    {
        vector<vector<int>> re;
        if(!root) return re;
        vector<TreeNode*> f;
        vector<int> s;
	TreeNode * node;
        int sum = 0;
        int t=  root->val;
         
while(node || !f.empty())
{
    if(node )
    {
        
        t = node->val;
        sum+=t;
        s.puah_back(t);
        f.push_back(node);
node= node->left;
        
        
    }
node = f.back();
if(!node->left&& node->right)
 	{
	node = node->right;
	 
}
  else   if(!node->right && !node->left)
    {
        
        if(sum == target)
            re.push_back(s);
	 

	if(!f.empty())
{
node = f.back();
sum -=node->val;
f.pop_back();
s.pop_back();
while(!f.empty() && f.back()->right == node)

{//是右孩子则一直出战
node = f.back();
sum -=node->val;
f.pop_back();
s.pop_back();
}
if(!f.empty())
{
node = f.back();

while(!f.empty() && !node->right)
{
sum -=node->val;
f.pop_back();
s.pop_back();
if(!f.empty())
node = f.back();


}
if(!f.empty())
 {
node=node->right;
}

}
 


} 
            
        
        
        
        
    }
    
    
}
        
        return re;
    }
    

  

 


};

