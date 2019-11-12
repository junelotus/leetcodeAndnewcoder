/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        if (!root)
            return {};
        if (!root->left && !root->right)
            return {root->val};
        vector<TreeNode *> node;
        vector<int> re;
        TreeNode *first = root;
        while (first || !node.empty())
        {

            while (first)
            {
                node.push_back(first);
                first = first->left;
            }

            first = node.back();
            //node.pop_back();
            //re.push_back(first->val);
            while (!node.empty() && !first->right)
            {
                node.pop_back();
                re.push_back(first->val);
                if (node.empty())
                    return re;
                first = node.back();
                //re.push_back(first->val);
            }
            if (node.empty())
                return re;
            re.push_back(first->val);
            node.pop_back();
            first = first->right;
        }
        return re;
    }
};

class Solution
{
public:
    int minCut(string s)
    {
        int len = s.size();
        vector<int> vec(len, 0);
        vector<vector<bool>> bvec(len, vector<bool>(len, false));
        for (int i = 0; i < len; i++)
        {
            vec[i] = i;
            for (int j = i; j >= 0; j--)
            {
                if ((s[i] == s[j]) && (i - j < 2 || bvec[i - 1][j + 1]))
                {
                    bvec[i][j] = true;
                    if (j == 0)
                        vec[i] = min(vec[i], 0);
                    else
                        vec[i] = min(vec[i], vec[j - 1] + 1);
                }
            }
        }
        return vec[len - 1];
    }
};

class Solution {
public:
    bool canJump(int A[], int n) {

if(n==0) return true;
  int re = n-1;
  int i=n-2;

  while(i>0)
  {
      if(A[i]!=0)
        {
            if(re-i<=A[i])
                re =i;
        } 
        i--;

  }
 return re<=A[0];
 
    }
};

class Solution {
public:
    int lengthOfLastWord(const char *s) {
    {
        int i=0;
        int space =0;
        while(s[i]!='\0') 
        {
            if(s[i]==' ')
             space++;
            i++;
            }
        if(space==0) return i-1;
        int d=i-1;
        while(d>=0&&s[d]==' ') d--;

        int counter=0;
        while(d>=0&&s[d]!=' ')
           {
                counter++;
                d--;
           }
            return counter;


    }

    }
};
