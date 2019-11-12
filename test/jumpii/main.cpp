#include <vector>
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
// class Solution {
// public:
//     int jump(int A[], int n) {
//         if(n<=1) return 0;
//         vector<vector<int>> re(n,vector<int>(n,-1));
//         re[0][0]=0;
//         int d =0;
//         int i=1;
//     for( ;i<n;i++)
//     {

//         if(i>A[0]) break;
//         re[0][i] = 1;

       

//     }
    
//     if(i==n) return 1;
// int min =n;
//         for(i=1;i<n;i++)
//         {
            
//          d=re[i-1][i];
//          if(d==-1)   break;
//          for(int j=i+1;j<n;j++)
//         {
//             if(j-i>A[i]) {re[i][j]=re[i-1][j];continue;}
//             if(re[i-1][j]==-1)
//                 re[i][j] =d+1;
//             else 
//             re[i][j] = d+1>re[i-1][j]?re[i-1][j]:d+1;

//         }
//         if(re[i][n-1]!=-1)
//             min=min>re[i][n-1]?re[i][n-1]:min;
//         }
 
//         if(min==n) return -1;
//         return min;
        
//     }
// };





// class Solution {
// public:
//     void nextPermutation(vector<int> &num) {

//         size_t size= num.size();
//         if(size<=1)  return ;
//         size_t i =size-1;
//         while(i>=1)
//         {
//             if(num[i]>num[i-1]) break;
//             i--;
//         }
//         std::sort(num.begin()+i,num.end());
//         // cout<<"i="<<i<<endl;
//          if(i!=0)
//         {
//         int d = upper_bound(num.begin()+i,num.end(),num[i-1])-num.begin();
//             // cout<<d<<"  "<<num[d]<<endl;
//         if(d ==size) d -=1;
//        // else d=d+i;
//         //  cout<<d<<"  "<<num[d]<<endl;
//             std::swap(num[i-1],num[d]);
//             std::sort(num.begin()+i,num.end());
//         }return ;
//     }
// };

// class Solution {
// public:
// int  isLeft(char c)
// {
//     if(c=='(') return 1;
//     if(c=='[') return 2;
//     if(c=='{') return 3;
//     return 0;

// }
// int  isRight(char c)
// {
//     if(c==')') return 1;
//     if(c==']') return 2;
//     if(c=='}') return 3;
//     return 0;

// }


//     bool isValid(string s) {
//         size_t size =s.size();
//         if(size==0) return true;
//         if(size&1==1) return false;
//         size_t i=0;
//         vector<int> re;
//         while(i<size)
//         {
//             int d = isLeft(s[i]);
//             if(d>0) re.push_back(d);
//             else{
//                 d = isRight(s[i]);
//                 if(re.empty()) return false;
//                 if(re.back()!=d) return false;
//                 re.pop_back();
                
//             }
//             i++;


//         }
//         if(!re.empty()) return false;

// return true;
        
//     }
// };


// class Solution {
// public:
//     int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
//         size_t size = gas.size();
//         //if(size==0) return  -1;
//         if(size<=1) return 0;
//         int sum =0;
//         size_t i=0;
//         size_t begin =-1;
//         int total =0;
//         while(i<size)
//         {  
//              total +=gas[i]-cost[i];
//             sum +=gas[i]-cost[i];
//             if(sum<0)
//             {
//                 sum =0;
//                 begin=i;
//             }

//             i++;
            

//         }
//         if(total<0) return -1;

//         if(begin==size) return -1;
//         return begin+1;
        
//     }
// };

// //复杂度O(n)
// class Solution {
// public:
//     int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
//         //total记录全局是否有解，sum记录i到i+1是否可行
//         int total = 0, sum = 0;
//         int index = -1;
//         for (int i = 0; i < gas.size(); i++) {
//             sum += gas[i] - cost[i];        //本次消耗
//             total += gas[i] - cost[i];  //总消耗
//             if (sum < 0) {
//                 sum = 0;
//                 index = i;    //记录解的位置
//             }
//         }
//         return total >= 0 ? index + 1 : -1;//只要total>=0，肯定有解
//     }
// };

 




class Solution {
public:
    int maximalRectangle(vector<vector<char> > &m) {
        int size= m.size();
        if(size==0) return 0;
        int subsize =m[0].size();
        if(subsize==0) return 0;
         int re =0;
         vector<int> h(subsize,0);
         int d =0;
        for(int i=0;i<size;i++)
         {   for(int j=0;j<subsize;j++)
            {
                if(m[i][j]!='0') 
                     h[j]++;
                else
                     h[j]=0;
                    //  cout<<h[j]<< " ";
                
            }
            // cout<<endl;
            vector<int> cu;
            int j=0;
         for( ;j<subsize;j++)
         {
             if(cu.size()<=1)
                d=-1;
                else d =cu[cu.size()-2];
             while(!cu.empty() &&(h[j])<(h[cu.back()] ) )
               {
                     re=std::max(re,(j-d-1)*(h[cu.back()] ));
                    //  cout<<"i = "<<i<<"j="<<j<<" "<<re<<endl;
                     cu.pop_back();
                     if(cu.empty()) break;
                     if(cu.size()<=1)
                d=-1;
                else d =cu[cu.size()-2];
                     
               }
              
            
            cu.push_back(j);
         }

          
             if(cu.size()<=1)
                d=-1;
                else d =cu[cu.size()-2];
             while(!cu.empty())
               {
                    re=std::max(re,(subsize-d-1)*(h[cu.back()] ));
                    //  cout<<"i = "<<i<<"j="<<cu.back()<<" "<<re<<endl;
                    cu.pop_back();
                   if(cu.size()<=1)
                    d=-1;
                   else 
                    d =cu[cu.size()-2];
                     
                     
               }
            
             
         
       
         
         }
            

        return re;      
        }
};
            

0 1 1 0 1 
1 2 0 1 0 
0 3 1 2 0 
1 4 2 3 0 
2 5 3 4 1 
0 0 0 0 0 

        //     for(int j=0;j<subsize;j++)
        //     {
        //         int min =1;
        //         int i=0;
        //         int counter=0;
        //         bool flag =false;
        //         while(i<size)
        //         {
        //             if(m[i][j]=='0')
        //             {
        //                 flag =false;
        //                 int t = min*counter;
        //                 re=re>t?re:t;
        //                 min=0;
        //                 counter=0;
        //             }
        //             else{
        //                 if(!flag){
        //                     min = (m[i][j]-'0');
        //                     flag =true;
        //                 }

        //                  if((m[i][j]-'0')<min)
        //                     min = (m[i][j]-'0');
        //                  counter++;  
        //                 int t = min*counter;
        //                 re=re>t?re:t;

        //                     // cout<<"counter ="<<i<<" "<<j<< " "<<counter<<endl; 

        //             }

        //             i++;

        //         }
        //          int t = min*counter;
        //                 re=re>t?re:t;
                
                 
        //     }
        // return re;
 

int main()
{
vector<vector<char>> A {{'0','1','1','1'},{'1','0','1','1'},{'1','1','1','1'}};
Solution so;
 cout<<so.maximalRectangle(A)<<endl; ;
 
 for(int i=0;i<3;i++)
 {for(int j=0;j<4;j++)
 cout<<A[i][j]<<" ";
 
 cout<<endl;}
// int a =1;
// char ch = (a+'0'-48)+'0';
// cout<<ch<<endl; //ch =1 ;
// a= (ch-'0');
// cout<<a<<endl;


  
    return 0;

}

// class Solution {
// public:
//     int maximalRectangle(vector<vector<char> > &matrix) {
//         if(matrix.size()==0)
//             return 0;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         vector<int> h(n);
//         int maxS = 0;
//         int num;
//         stack<int> st;
//         st.push(-1);
//         for(int i=0;i<m;i++)
//         {
//               //求当前第i行往上连续1的个数，不连续就置为0，方便下一行统计
//               //j表示列号，即直方图的连续序号
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]=='1')
//                     h[j]++;
//                 else
//                     h[j] = 0;
//             }
//             for(int j=0;j<n;j++)
//             {
//                       //这里主要思路是遇到上升序列就入栈，遇到下降序列就计算当前前一个直方图(即当前栈顶序号)
//                       //到所有依次出栈（即降序且大于j指向直方图的高度）直方图的距离，然后乘以出栈直方图的高度，
//                        //即为当前的面积(不一定最大),剩下的序列依然是升序的，迭代下去
//                 while(st.top()!=-1 && h[j]<h[st.top()])
//                 {
//                     num = st.top();
//                     st.pop();
//                     maxS = max(maxS,(j-1-st.top())*h[num]);
//                 }
//                 st.push(j);
//             }
//                //计算栈中最后一个上升序列的面积（方法同上）
//             while(st.top()!=-1)
//             {
//                 num = st.top();
//                 st.pop();
//                 maxS = max(maxS,(n-1-st.top())*h[num]);
//             }
//         }
//         return maxS;
//     }
// };


class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int res = 0;
        vector<int> height(cols, 0);
        vector<int> left(cols, 0);
        vector<int> right(cols, cols);
        for (int i = 0; i < rows; i++) {

            int curleft = 0, curright = cols;
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    height[j]++;
                } else {
                    height[j] = 0;
                }
                cout<< height[j]<<" ";
            }
            cout<<endl;




            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    left[j] = std::max(left[j], curleft);//当前行最短的值 和上面是1的最短的值，说明以当前行为底，最左可以延伸到的地方,若上方为1 ，则是当前行最左和上行最左的比较，如果上一行此列为0,直接是当前行的最左即可
                    
                } else {
                    left[j] = 0;
                    curleft = j+1;
                }
                 cout<< left[j]<<" ";
            }





            cout<<endl;
            for (int j = cols-1; j >= 0; j--) {
                if (matrix[i][j] == '1') {
                    right[j] = std::min(right[j], curright);
                } else {
                    right[j] = cols;
                    curright = j;
                }
                cout<< right[j]<<" ";
            }
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for (int j = 0; j < cols; j++) {
                //cout << height[j] << " " << (right[j] - left[j]) << endl;
                res = std::max(res, height[j]*(right[j] - left[j]));
            }
        }
        return res;
    }
};

[["0","1","1","0","1"],
 ["1","1","0","1","0"],
 ["0","1","1","1","0"],
 ["1","1","1","1","0"],
 ["1","1","1","1","1"],
 ["0","0","0","0","0"]]

height: 0 1 1 0 1 
left: 0 1 1 0 4 
right: 5 5 3 3 5 

height: 1 2 0 1 0 
left: 0 1 0 3 0 
right: 5 4 5 2 2 

height: 0 3 1 2 0 
left: 0 1 1 3 0 
right: 5 4 4 2 5 

height: 1 4 2 3 0 
left: 0 1 1 3 0 
right: 5 4 4 2 4 

height: 2 5 3 4 1 
left:   0 1 1 3 0 
right:  5 4 4 2 4 

height: 0 0 0 0 0 
left: 0 0 0 0 0 
right: 5 5 5 5 5 

#define MIN_INT 2147483648
class Solution {
public:
    int atoi(const char *str) {
        if(str==NULL) return 0;
        int size = strlen(str);
        if(size==0) return 0;
        bool flag =false;
        // if(str[0]=='-')
        //     flag =true;
        long long d =0;
        int i=0;
        while(str[i]==' ')
        {
            if(str[i]=='-')
             flag =true;
            ++i;
        }

          
    if(str[i]=='+' || str[i]=='-'){
        if(str[i]=='-')
            flag =true;
        i++;
    }
        //  while(str[i]=='0')
        // i++;
     
        for( ;i<size;i++)
        {
            if(!(str[i]>='0'&&str[i]<='9')) return  flag?-d:d;
            int t  =str[i]-'0';
                d=d*10+t;

            if(d>=static_cast<long,long>(INT_MAX)&&!flag){
                    return  INT_MAX;
            if(d>=MIN_INT&&flag) return INT_MIN;        
                }
        }   
        if(flag) d=0-d; 
        return d;
    }
};

#define MIN_INT 2147483648
class Solution {
public:
    int atoi(const char *str) {
            if(str==NULL) return 0;
    int i=0, sign=1, result=0, c;
    while(str[i]==' ')
        i++;
   
     
    while(str[i]=='0')
        i++;
     
    for(; i<strlen(str); i++){
        if(!(str[i]>='0' && str[i]<='9'))
            return sign>0?result:-result;
        else{
            c = str[i]-'0';
            if(sign>0 && (result>INT_MAX/10||(result==INT_MAX/10&&c>INT_MAX%10)))
                return INT_MAX;
            else if(sign<0 && (result>MIN_INT/10||(result==MIN_INT/10&&c>MIN_INT%10)))
                return INT_MIN;
            result = result*10 + c;
        }
    }
    return sign>0?result:-result;
    }
};



字符串"PAYPALISHIRING"写成3行的Z字形的样式如下：

P   A   H   N
A P L S I I G
Y   I   R


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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        size_t size =num.size();
        if(size==0) return NULL;
        return fun(num,0,size-1);
        
    }
TreeNode *fun(vector<int> &num,int begin,int end){
    //if(begin>end) return NULL;
    if(begin==end&&(begin>=0&&begin<num.size())) return new TreeNode(num[begin]);
    if(begin>=end) return NULL;
    int m=(begin+end)/2;
    TreeNode * node =(TreeNode*)malloc(sizeof(TreeNode));
    node->val = num[m];
    node->left = fun(num,begin,m-1);
    node->right = fun(num,m+1,end);
    return node;


}

};

public class Demo3 {
    public TreeNode sortedArrayToBST(int[] nums) {
        if(nums==null||nums.length==0)
            return null;
        return sortedArrayToBST(nums,0,nums.length-1);
    }
 
    private TreeNode sortedArrayToBST(int[] nums, int left, int right) {
        if(right<left)
            return null;
        if(left==right)
            return new TreeNode(nums[left]);
        int mid=left+(right-left+1)/2;
        TreeNode root=new TreeNode(nums[mid]);
         
        root.left=sortedArrayToBST(nums,left,mid-1);
        root.right=sortedArrayToBST(nums,mid+1,right);
         
        return root;
    }
 

 class Solution {
public:
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {
        
    }
};
]
 给定的初始单词start="hit"，
目标单词end ="cog"。
单词字典dict =["hot","dot","dog","lot","log"]
返回的结果为：  [↵    ["hit","hot","dot","dog","cog"],↵    ["hit","hot","lot","log","cog"]↵  ]

class Solution {
public:
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {
        
    }
};