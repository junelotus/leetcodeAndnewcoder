class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
  bool f = false;
depth(pRoot);

return f;
    }


  int depth(TreeNode * pRoot,bool & f)
{
	if(!pRoot) return 0;
	if(!pRoot->left&&!p-Root->right) return 1;
	int d1 =0;
	int d2 =0;
        if(pRoot->left)
		d1=1+depth(pRoot->left);
	if(pRoot->right)
		d2 =1+depth(pRoot->right);
	if(abs(d1-d2)>1) f =false;
  return d1>d2?d1:d2;


}


};
