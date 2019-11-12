/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <vector>
#include <iostream> 
using namespace std;
// class Solution {
// public:
//         int findMax(vector<int> cu)
//         {
//             int max = cu[0];
//             int sum =cu[0];
//             int i=0;
//             int size=cu.size();
//             while(i<size)
//             {
//                 if(sum<0)
//                 sum =0;
//                 sum+=cu[i];
//                 if(sum>max)
//                     max =sum;
//                 i++;
                
                 
//             }
//             return max;

//         }

// int func(vector<int> cu)
// {
//     int re =0;
//     for(auto i:cu)
//     re+=i;

//     return re;
// }
//     vector<vector<int> > pathSum(TreeNode *root, int sum) {
//         int max =0;
        
//         vector<vector<int>> wode;
//         if(!root) return wode;
//         //if(!root->left&&!root->right) return root->val;
//         vector<TreeNode * > re;//(1,root);
//         vector<int> cu;//(1,root->val);
//         TreeNode * first =root;
//         while(first|| !re.empty())
//         {
//             while(first)
//             {
//                 re.push_back(first);
//                 cu.push_back(first->val);
//                 first =first->left;

//             }
//             first = re.back();
//             TreeNode *second =NULL;
// while(!re.empty()&&(!first->right || first->right==second))
// {
//     if(!first->right&&!first->left)
//         {
//             if(sum==func(  cu))
//                 wode.push_back(cu);


//         }
//     second = first;
//     re.pop_back();
//     cu.pop_back();
//     if(re.empty()) return wode;
//     first= re.back();


// }
// if(re.empty()) return wode;
// first= first->right;


//         }

        

// return wode;

        
//     }
// };

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
        int maxPathSum(TreeNode *root) {
        int maxx =INT_MIN;
        if(!root) return 0;
        if(!root->left&&!root->right) return root->val;
        vector<TreeNode * > re;//(1,root);
        vector<int> cu;//(1,root->val);
        TreeNode * first =root;
        while(first|| !re.empty())
        {
            while(first)
            {
                re.push_back(first);
                cu.push_back(first->val);
                first =first->left;

            }
            first = re.back();
TreeNode *second =NULL;

while(!re.empty()&&(!first->right || first->right==second))
{
    int a =INT_MIN;
    int b=INT_MIN;
    if(first->left)
       {
             a = first->left->val;
        //    if(d>0)
        //     first->val +=d;
        //     //max =findMax(  cu);
       
       }
       if(first->right)
       {
           b = first->right->val;
        //    if(d>0)
        //     first->val +=d;
        //     //max =findMax(  cu);
       
       }
    //    if(a>INT_MIN||b>INT_MIN){
       int wode = std::max(a,b);
       int nide =std::min(a,b);
       if(wode>0)
        first->val+=wode;
       if(nide>0)
        maxx =std::max(maxx,first->val+nide);
       maxx =std::max(maxx,first->val);
    //    }
       //maxx =std::max(maxx,first->val);
    second = first;
    re.pop_back();
    cu.pop_back();
    if(re.empty()) return maxx;
    first= re.back();


}
if(re.empty()) return maxx;
first= first->right;


        }

        

return maxx;

        
    }
};
int main()
{
    Solution so;

    vector<int> cu{-1,-3,-2,0,1,2,-1,6};
cout<<so.findMax(cu)<<endl;;
return 0;
}

Given a non-empty binary tree, find the maximum path sum.

For this problem, 
a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. 
The path must contain at least one node and does not need to go through the root

-10
   / \
  9  20
    /  \
   15   7

   [5,4,8,11,null,13,4,7,2,null,null,null,1]

   填充所有节点的next指针，指向它右兄弟节点。如果没有右兄弟节点，则应该将next指针设置为NULL。
初始时，所有的next指针都为NULL
注意：

    你只能使用常量级的额外内存空间
    可以假设给出的二叉树是一个完美的二叉树(即，所有叶子节点都位于同一层，而且每个父节点都有两个孩子节点)。


class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root)
            return;
        TreeLinkNode *p = root, *q;
        while (p->left) {
            q = p;
            while (q) {
                q->left->next = q->right;
                if (q->next)
                    q->right->next = q->next->left;
                q = q->next;
            }
            p = p->left;
        }
    }
};

class Solution {
public:
    void connect(TreeLinkNode *root) {
         if (!root)
            return;
        TreeLinkNode *p = root, *q;
        while(p)
        {
        if(!p->left) {p=p->right;continue;}
        q=p;
        while(q)
        {
            if(!q->left) {q=q->right;continue;}
            if(q->left)
                q->left->next = q->right;
            if(q->next)
               { 
                   if(q->next->left)

                   q->right->next=q->next->left;
                   else if(q->next->right)
                    q->right->next=q->next->right;
                    
               
               }
               q=q->next;

        }
        p=p->left;
        }
    }
};

import java.util.LinkedList;
import java.util.Scanner;
 
public class Solution {
    public void connect(TreeLinkNode root) {
         
        if (root== null) return;
 
        LinkedList<TreeLinkNode> queue = new LinkedList<>();
        queue.offer(root);
        while (!queue.isEmpty()) {
            int length = queue.size();  //length存储的是目前这一层的长度
            for (int i = 0; i < length; i++) {
                TreeLinkNode curNode = queue.poll();
                if (i == length - 1) {  //length表示是这一层最后一个节点，它的next为null
                    curNode.next = null;
                }else {
                    curNode.next = queue.peek();
                }
            if(curNode.left != null) queue.offer(curNode.left);
            if(curNode.right != null) queue.offer(curNode.right);
            }
        }
    }
}

class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root)
        {
            TreeLinkNode first(-1);
            auto pre=&first;
            for(auto node=root;node;node=node->next)
            {
                if(node->left)
                {
                    pre->next=node->left;
                    pre=node->left;
                }
                if(node->right)
                {
                    pre->next=node->right;
                    pre=node->right;
                }
            }
            root=first.next;
        }
    }
};