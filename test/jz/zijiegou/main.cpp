/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(!pRoot1||!pRoot2) return false;
        bool flag =true;
        bianli( pRoot1, pRoot2,flag);
        return flag;

    }
    
    bool isEqual(TreeNode * p,TreeNode * q)
    {
        if(!q) return true;
        if(!p) return false;
        bool flag =false;
        if(p->val!=q->val) return false;
        return  isEqual(p->left,q->left ) &&isEqual(p->right,q->right );
       
        
        
    }

 bool bianli(TreeNode *p,TreeNode *q,bool &flag)
 {
       flag = isEqual( p, q);
     if(flag ) return flag;
     bianli(p->left,q,flag);
     if(flag) return flag;
    bianli(p->right,q,flag);
     if(flag) return flag;


return flag;
 }

    
};
