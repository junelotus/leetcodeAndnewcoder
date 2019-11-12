/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


#include <iostream>
using namespace std;
class Solution {
 
public:
   std::pair<bool,int> hashuan(ListNode *head)
    {
        if(head==NULL) return   pair<bool,int>(false,0);
        int counter =0;
        ListNode * first =head;
        ListNode* second = head;
        while(second!=NULL)
        {
            first=first->next;
            second =second->next;
            if(second==NULL) return pair<bool,int>(false,counter+1);
            second =second->next;
            counter+=2;
            if(second==first) break;

        }
        if(second==NULL) return pair<bool,int>(false,counter);
          counter =1;
        do{
            first=first->next;
            second=second->next->next;
            counter++;
        }while(first!=second);

return   pair<bool,int>(true,counter);


    }


ListNode* noCircleCommom(ListNode* pHead1, ListNode* pHead2,int a,int b)
{
    ListNode * head1=pHead1 ;
    ListNode * head2=pHead2 ;
    int i =abs(a-b);
    if(a<b)
    {
        for(int j=0;j<i;j++)
        head2=head2->next;


    }
    else {
        for(int j=0;j<i;j++)
        head1=head1->next;

    }

    while(head1&&head2&&head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
    }
    if(head1==head2)
    return head1;
    return NULL;
}
pair<ListNode*,int> entryNode(ListNode* pHead1,int a){

    ListNode * head1=pHead1 ;
    ListNode * head2=pHead1 ;
    int i =0;
    int counter=0;
    while(i<a)
    {
        head2 = head2->next;
        i++;
    }

while(head1!=head2)
{
    head2 = head2->next;
    head1 = head1->next;
    counter++;

}

return pair<ListNode*,int>(head1,counter);
}

bool inCircle(ListNode* pHead1, ListNode* pHead2,int a)
{
int i=0;
ListNode * head1=pHead1 ;
    ListNode * head2=pHead1 ;
while(i<a)
{
    i++;
    if(head1==head2) return true;
    head1=head1->next;

}
return false;

}


    
     ListNode *getIntersectionNode(ListNode *pHead1, ListNode *pHead2) {
       std::pair<bool,int> first 147= hashuan(  pHead1);
       std::pair<bool,int> second = hashuan(  pHead2);
         cout<<first.first <<"  "<<second.first<<endl;
         cout<<first.second <<"  "<<second.second<<endl;
        if(first.first!=second.first || first.second!=second.second) return NULL;
          
        if(first.first==0)
        return noCircleCommom(  pHead1,  pHead2, first.second, second.second);
        else 
        {
           std::pair<ListNode*,int> f =entryNode(  pHead1,first.second);
           std::pair<ListNode*,int> s =entryNode(  pHead2,second.second);
            if(f.first == s.first ||inCircle(  pHead1,   pHead2, first.second)) return f.first;
                         else 
            return noCircleCommom(  pHead1,  pHead2, f.second, s.second);

        }



        
    }
};
    
    


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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        TreeNode * first =root;
        vector<int> re;
        queue<TreeNode*> q;
        if(root) q.push(root);
        int size = q.size();
        while(!q.empty())
        {
            for(int i=0;i<size;i++){
            TreeNode * second = q.front();
            re.push_back(second->val);
            q.pop();
            if(second->left)
                q.push(second->left);
            if(second->right)
                q.push(second->right);

            }
             size = q.size();

        }

        return re;





    }
};
 

 class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {

        int size = array.size();
        int sum  =array[0];
        int presum = array[0];
        int i=0;
        while(i<size)
        {
            if(array[i]<0 )
             {
                 if(array[i]>sum)
                 {
                     sum =array[i];
                     presum =array[i];
                 }
             }
             else {
                  sum =array[i];
                     presum =array[i];
                     break;
             }
             i++;

        }
        i++;
        while(i<size)
            {
                if(array[i]<0)
                {

                    if(presum+array[i]>0)
                     presum+=array[i];
                     else presum  =0;

                }
                else 
                {
                    if(presum+array[i]>sum)
                    {
                        sum =presum+array[i];
                    }
                    presum+=array[i];

                }
                i++;

            }

        return sum;
    
    }
};

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> n) {

        int size  = n.size();
        int i=0;
        int j=i+1;
        while(j<size)
        {
            if(n[i]==n[j])
             j++;
            else {
                if(i==j-1)
               {
                   i=j+1;
                   j=i+1;
               }
                else{
                std::swap(n[i],n[j]);
                i+=2;
                j++;
            } }

        }
        int counter = 0;
        for(int j=0;j<size;j++)
            if(n[i]==n[j])
             counter++;

             if(counter>=(size+1)/2)

return n[i];
    return 0;
    }
};

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> n) {

        int size  = n.size();
       
        int counter=1;
        int i=0,j=1;
        while(j<size)
        {
            if(n[j]==n[i])
             {
                 counter++;
                 j++;
                 
             }
             else{
                 counter--;
                 if(counter==0)
                 {
                     i=j+1;
                     j=i+1;
                     counter=1;

                 }
                 else j++;
             }







        }
          counter = 0;
        for(int j=0;j<size;j++)
            if(n[i]==n[j])
             counter++;

             if(counter>=(size+1)/2)

return n[i];
    return 0;
    }
};

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        
    }
};

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
    int TreeDepth(TreeNode* pRoot)
    {
        if(!pRoot) return 0;
       int d1 = depth(  pRoot->left)+1;
       int d2= depth(  pRoot->right)+1;
       return d1>d2?d1:d2;
      
    }

//    int depth(TreeNode* pRoot)
//    {
//        if(!pRoot) return 0;
//        int d1 = depth(  pRoot->left)+1;
//        int d2= depth(  pRoot->right)+1;
//        return d1>d2?d1:d2;


//    }

};

class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(!pRootOfTree) return NULL;
        TreeNode * first =NULL;
        TreeNode ** f =&first;
          
 
        TreeNode *node = pRootOfTree;
        convertToTree( node,    f);
        TreeNode* head =pRootOfTree;
while(head->left!=NULL)
 head=head->left;
 return head;


        
    }

    void convertToTree(TreeNode *node,TreeNode ** first)
    {
        if(node->left)
            convertToTree( node->left,first);
         

        node ->left = *first;
        if(*first)
            (*first)->right =node;
        *first =node;
        

        if(node->right)
            convertToTree( node->right,first);
             
           
        

    }

};


class Solution {
public:
    vector<string> Permutation(string str) {
        int size = str.size();
        vector<string> re;
        if(size==0) return re;
        if(size==1){re.push_back(str);return re;}

        std::sort(str.begin(),str.end());

        string subre = "" ;
        find( re,  str,  str.size() ,0,  subre);

        std::sort(re.begin(),re.end());
        return  re;



        
    }

    void find(vector<string> &re,string str,int size ,int i,string &subre)
    {
        int c1 =i;
        int c2 =c1;
            for( ;c1<size;c1++)
             for( ;c2<size;c2++)
             {
                 if(str[c1]==str[c2] &&c1!=c2)  continue;
                 std::swap(str[c1],str[c2]);
                 subre+=str[c1];
                 find( re,  str,  size ,  c1+1,  subre);
                  if(subre.size()==size)
                     re.push_back(subre);
                    subre.resize(subre.size()-1); 
                    std::swap(str[c1],str[c2]);
                 
                
             }
        
         
         




    }

};

class Solution {
public:
    class Solution {
    
  
public:
    vector<string> Permutation(string str) {
        perm(0, str);
        sort(res.begin(), res.end());
        return res;
    }
    }
};
 

 vector<string> res;
    
    void perm(int k, string str){
        if(k == str.size()-1) res.push_back(str);
        for(int i = k; i < str.size(); i++){
            if(i != k && str[k] == str[i]) continue;
            swap(str[k], str[i]);
            perm(k+1, str);
            swap(str[k], str[i]);
        }
    }


class Solution {
public:
    int rectCover(int number) {
        vector<int> re(number,0);
        if(number==0) return 0;
        re[number-1] =1;
        if(number==1) return 1;
        re[number-2] =2;
        for(int i =number-3;i>=0;i--)
        {
            re[i] = re[i+1]+re[i+2];


        }
        return re[0];


    }
};


class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
vector<int> re;
        ListNode* first =head;
         while(first ){
         re.push_back(first->val);
         first=first->next;

         }

         reverse(re.begin(),re.end());
        return re;
    }

    // void fun(ListNode* head ,vector<int> &re)
    // {
    //     if(head->next)
    //      {
    //           fun(  head->next ,re);
         
    //      }
    //      re.push_back(head->val);
    // }
};


class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        if(n<=0) return 0;
    int t =1;
    int b =n%10;
    int a  =n/10;
    int sum =0;
    int yushu  =b;
    while(a>0)
    {
        cout<<"a="<<a<<"  b="<<b<<endl;
        int wode = a+1;
        int nide =0;
         if(b==0)
             wode-=1;
         else if(yushu<2*t-1)
             nide=t-yushu%t-1;
          //sum-=(  t-1- (n-a*t*10-t ));
         sum+=t*wode-nide;

        



         cout<<"wode ="<<wode <<endl;
         cout<<" t*wode = "<<t*wode<<endl;
         t*=10;
          b =a%10;
          a  =a/10;
          yushu=b*t+yushu;
          
          
    }
    //if(b!=0)
cout<<"nolia = " <<n-b*t+1<<endl;
cout<<"a="<<a<<"  b="<<b<<"t ="<<t<<endl;
 
     
    if(b>1)
        sum+=t;
    else 
        sum+=n-b*t+1;
    cout<<sum<<endl;
return sum;
    }
};

a=11  b=0
wode =11
 t*wode = 11
a=1  b=1
wode =2
 t*wode = 20
nolia = 11
a=0  b=1
t =100


class Solution {
public:
  
  int nums[15];
  int f[15][10], t[15][10];
  int ret;
  
  pair<int, int> dfs(int len, int  , int state) {
    if (len == -1)
      return make_pair(1, 0);
    if (!up && f[len][state] != -1)
      return make_pair(f[len][state], t[len][state]);
    int ans = 0, maxv = up ? nums[len] : 9;
    int ret = 0;
    for (int i = 0; i <= maxv; i ++) {
      auto tt = dfs(len - 1, up && i == maxv, i);
      ans += tt.first, ret += tt.second;
      if (i == 1)
        ret += tt.first;
    }
    if (!up) f[len][state] = ans, t[len][state] = ret;
    return make_pair(ans, ret);
  }
  
  int work(int n) {
    int pos = 0;
    while (n) {
      nums[pos ++] = n % 10;
      n /= 10;
    }
    return dfs(pos - 1, 1, 0).second;
  }
  
  int countDigitOne(int n) {
    memset(f, -1, sizeof(f));
    ret = 0;
    return work(n);
  }
};

enum string{    
    x1,    
    x2,    
    x3=10,    
    x4,    
    x5,    
} x;

2147483648
class Solution {
public:
     int  NumberOf1(int nn) {
          long long n =0-pow(2,31);
         if( nn==n) return 1;
         n =nn;
         int counter =0;
         int wode =0;
         while(n!=0&&wode<31){
         if(n&0x01==1 ||n&0x01==-1)
            counter++;
         n= n>>1;
         wode++;
         }
         
         return counter;
         
     }
};






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
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        
        int size1 = pre.size();
        int size2 = vin.size();
        if(size1!=size2|| size1==0) return NULL;
        return rebuildTree( pre,0,size1-1,vin,0,size2-1);

    }

    TreeNode* rebuildTree(vector<int> pre,int begin1, int end1,vector<int> vin,int begin2,int end2)
    {
        if( begin2>end2) return NULL;
        
        TreeNode *node =(TreeNode*)malloc(sizeof(TreeNode));
        node->val = pre[begin1];
        int i= begin2;
        for( ;i<=end2;i++)
            if(vin[i]==pre[begin1])
             break;
        if(i==end2+1) return NULL;     

        node->left = rebuildTree(  pre,  begin1+1, begin1+(i-begin2),    vin,  begin2, i-1);

        node->right = rebuildTree(  pre,  begin1+(i-begin2)+1,  end1 ,  vin,  i+1, end2);
        return node;

    }



};


class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent==0) return 1;
        if(base==0.0||exponent==1) return base;
        double re =powFun(base,abs(exponent));
        if(exponent<0)
        re=1.0/re;
        return re; 
    
    }

double powFun(double base,int e)
{
    
    if(e==1) return base;
    double re =powFun(  base,  e/2);
    re*=re;
    if(e&01==1) re*=base;
    return re;

}

};

class Solution {
public:
    int jumpFloorII(int number) {
        vector<int> re(number,0);
        re[0]=1;
        re[1]=2;
        for(int i=2;i<number;i++)
         {for(int j=0;j<i;j++)
          re[i]+=re[j];
         re[i]+=1;
         }
return  re[number-1];
    }
};

class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers 
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int n[], int length, int* duplication) {
        if(length<=1) return false;
        int counter =0;
        int i=0;
        int j=1;
        int replace =n[0];
        n[0] =-2;
        int t=0;
        vector<int> re ;
        while(j<length)
        {
            while(j<length&&replace<0)
            {
                replace =n[j];
                
                if(replace>=0) n[j]=-2;
                j++;
            }
            if(j==length) break;
             if(replace==n[replace])
             {
                  re.push_back(replace);
                 n[replace]=-1;
                 counter++;
                 replace=-3;
                 //t++;
                


             }   

else 
{


    if(n[replace]==-2 )
        {
          
            //t++;
            n[replace]=-1;
            replace =-3;

        }
    else 
    if(n[replace]==-1)
        {
             re.push_back(replace);

            counter++;
            replace=-3;
        }
        else 
       {
            replace =n[replace];
            n[replace] = -1;
       }

}


        }
        
duplication =(int*)malloc(sizeof(int)*(re.size()+1));
 int i=0;
for( ;i<re.size();i++)
*(duplication+i) =re[i];
*(duplication+i) ='\0';

        return counter>0;
        

        
    }
};


class Solution {
public:
    vector<int> maxInWindows(const vector<int>& n, unsigned int size)
    {
       
int s =n.size();

        vector<int> re(s-size+1,0);
        deque<int> dq;
        for(int i=0;i<size&&i<s;i++)
        {   if(dq.empty())
                dq.push_back(i);
             else if(!dq.empty()&&n[i]>n[dq.front()])
                {
                    dq.pop_front();
                    dq.push_back(i);
                    }
                else dq.push_back(i);   


        }
        if(size>=s) return __DBL_HAS_QUIET_NAN__.front();
int j=0;int t=size;
re[j++] =n[dq.front()];
for(;t<s;t++)
{
    while(!dq.empty() && n[dq.front()]<j)
         dq.pop_front();
    while(!dq.empty()&&n[t]>=n[dq.front()])
         dq.pop_front();
    //dq.push_back(t);
    //re[j++]= n[dq.front()];
}
return re;  ;        
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int size) {
        

int s =n.size();

        vector<int> re;
        if(s==0) return re;
        deque<int> dq;
        for(int i=0;i<size&&i<s;i++)
        {   if(dq.empty())
                dq.push_back(i);
             else if(!dq.empty())
             { while(!dq.empty()&&n[i]>n[dq.front()])
                {
                    dq.pop_front();
                    
                    }
             dq.push_back(i);
             } 
              else{ 
                  
                  while(!dq.empty()&&n[i]>=n[dq.back()])
                   dq.pop_back();
                  dq.push_back(i);}   


        }
        if(size>=s) { re.push_back(n[dq.front()]); return re;}
int j=0;int t=size;
 re.push_back( n[dq.front()]);
        j++;
for(;t<s;t++)
{
    while(!dq.empty() &&  dq.front() <j)
         dq.pop_front();
    while(!dq.empty()&&n[t]>=n[dq.front()])
         dq.pop_front();
    { 
        while(!dq.empty()&&n[t]>=n[dq.back()])
                   dq.pop_back();
        dq.push_back(t);}//
    cout<<t<<endl;
    cout<<dq.front()<<endl;
    re.push_back( n[dq.front()]);j++;
}
return re;          
        
    }
};


class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if(str==NULL|| matrix==NULL) return false;


    
    }


};


#include <iostream>
#include <string>
using namespace std;

string fun(string str){
    int size =str.size();
    if(size<=2) return str;
    string re ="";
    int i=0;
    bool flag =false;
    bool flag1 =false;
    int counter=1;
    while(i<size)
    {
        if(re.empty())
          re+=str[i];

        else {
            if(str[i]!=re.back())
              {
                  if(counter==1)
                   flag=flag1=false;
                  counter=1;
                  re+=str[i];
                      
              }
            else {
             counter++;
             if(counter==2)
             {
                re+=str[i];
                if(!flag)
                flag =true;
                else 
                flag1=true;
             }
              if(flag &&flag1)
                  { 
                      re.erase(re.size()-1); 
                      flag1=false;
                      counter=1;
                  }
                 // else if(flag ==true)re+=str[i];
             if(counter==3){
                counter=2;
                
            }
             
            
            }
           
             

        }  
       
i++;

    }

return re;
    }

 int main()
 {
     int counter=0;
cin>>counter;
int i=0;
while(i++<counter)
{string str;

    cin>>str;
    cout<<fun(str)<<endl;

}
return 0;
 }



我叫王大锤，是一名特工。我刚刚接到任务：在字节跳动大街进行埋伏，抓捕恐怖分子孔连顺。和我一起行动的还有另外两名特工，我提议

1. 我们在字节跳动大街的N个建筑中选定3个埋伏地点。
2. 为了相互照应，我们决定相距最远的两名特工间的距离不超过D。

我特喵是个天才! 经过精密的计算，我们从X种可行的埋伏方案中选择了一种。这个方案万无一失，颤抖吧，孔连顺！
……
万万没想到，计划还是失败了，孔连顺化妆成小龙女，混在cosplay的队伍中逃出了字节跳动大街。只怪他的伪装太成功了，就是杨过本人来了也发现不了的！

请听题：给定N（可选作为埋伏点的建筑物数）、D（相距最远的两名特工间的距离的最大值）以及可选建筑的坐标，计算在这次行动中，大锤的小队有多少种埋伏选择。
注意：
1. 两个特工不能埋伏在同一地点
2. 三个特工是等价的：即同样的位置组合(A, B, C) 只算一种埋伏方法，不能因“特工之间互换位置”而重复使用


输入描述:

第一行包含空格分隔的两个数字 N和D(1 ≤ N ≤ 1000000; 1 ≤ D ≤ 1000000)

第二行包含N个建筑物的的位置，每个位置用一个整数（取值区间为[0, 1000000]）表示，从小到大排列（将字节跳动大街看做一条数轴）


输出描述:

一个数字，表示不同埋伏方案的数量。结果可能溢出，请对 99997867 取模


输入例子1:

4 3
1 2 3 4


输出例子1:

4


例子说明1:

可选方案 (1, 2, 3), (1, 2, 4), (1, 3, 4), (2, 3, 4)


输入例子2:

5 19
1 10 20 30 50


输出例子2:

1


例子说明2:

可选方案 (1, 10, 20)

重置自测
1

​

收藏本题 标记一下 场外求助 提交结果有问题?
收起答题卡

    1
    2
    3
    4
    5
    6
    7


小包最近迷上了一款叫做雀魂的麻将游戏，但是这个游戏规则太复杂，小包玩了几个月了还是输多赢少。
于是生气的小包根据游戏简化了一下规则发明了一种新的麻将，只留下一种花色，并且去除了一些特殊和牌方式（例如七对子等），具体的规则如下：

    总共有36张牌，每张牌是1~9。每个数字4张牌。
    你手里有其中的14张牌，如果这14张牌满足如下条件，即算作和牌

    14张牌中有2张相同数字的牌，称为雀头。
    除去上述2张牌，剩下12张牌可以组成4个顺子或刻子。顺子的意思是递增的连续3个数字牌（例如234,567等），刻子的意思是相同数字的3个数字牌（例如111,777）


例如：
1 1 1 2 2 2 6 6 6 7 7 7 9 9 可以组成1,2,6,7的4个刻子和9的雀头，可以和牌
1 1 1 1 2 2 3 3 5 6 7 7 8 9 用1做雀头，组123,123,567,789的四个顺子，可以和牌
1 1 1 2 2 2 3 3 3 5 6 7 7 9 无论用1 2 3 7哪个做雀头，都无法组成和牌的条件。

现在，小包从36张牌中抽取了13张牌，他想知道在剩下的23张牌中，再取一张牌，取到哪几种数字牌可以和牌。

输入描述:

输入只有一行，包含13个数字，用空格分隔，每个数字在1~9之间，数据保证同种数字最多出现4次。


输出描述:

输出同样是一行，包含1个或以上的数字。代表他再取到哪些牌可以和牌。若满足条件的有多种牌，请按从小到大的顺序输出。若没有满足条件的牌，请输出一个数字0


输入例子1:

1 1 1 2 2 2 5 5 5 6 6 6 9


输出例子1:

9


例子说明1:

可以组成1,2,6,7的4个刻子和9的雀头


输入例子2:

1 1 1 1 2 2 3 3 5 6 7 8 9


输出例子2:

4 7


例子说明2:

用1做雀头，组123,123,567或456,789的四个顺子


输入例子3:

1 1 1 2 2 2 3 3 3 5 7 7 9


输出例子3:

0


例子说明3:

来任何牌都无法和牌




bool fun(map<int,int> o,int t,int zushu)
{
    if(++o[t]>4) return false;


return find(o,o.begin()->first,3);





}


bool findTwo(map<int,int> o)
{
     int counter=0;
    map<int,int>::iterator it =o.begin();
    while(it!=o.end())
     {
         if(it->second==1)
          counter++;
          if(counter>2) return false;
     it++;
     }

     if(counter==2) return true;
     return false;
}

bool find(map<int,int> o,int k,int zushu)
{

if(zushu==0) 
  return  findTwo( o);
 
while(k<=9 && o[k]==0) k++;

if(k>9) return false;


bool f1 =false;
bool f2= false;
bool f3= false;
if(o[k]>=3)
{
o[k]-=3;
f1 = find(  o,  k+1,zushu-1);
}

if(o[k]-1>=0 &&o[k+1]>=1 &&o[k+2]>=1)
{
f2= find(  o,  k+1,zushu-1);

}

f3 =find(  o,  k+2,zushu-1);

return f1||f2||f3;


}

int main()
{
    int i=0;
    bool flag =true;
    while(getline())
    {
        map<int,int> o;
    while(i++<13)
    {
        
        o[i]+;
    }

     vector<int> re;
     for(int i=1;i<10;i++)
      {
          if(fun(  o,  i,  3))
          {
               
                 cout<<i<<endl;
                 flag =false;
          }
      }


    if(flag )  cout<<0<<endl;
    flag =true;
    }

return 0;

}
































//     for(int i=0;i<2;i++)
//         { if(i==0){
//             if(o[k]>=3)
//                 {
//                     o[k]-=3;
//                     return find(  o,  k+1,zushu-1);
//                 }
                
//                 }

//           if(i==1)
//           {
//               if(o[k]-1>=0 &&o[k+1]>=1 &&o[k+2]>=1)
//               {
//                   return find(  o,  k+1,zushu-1);

//               }


//           }      
//         }
// return find(  o,  k+2,zushu-1);;

//  if(zushu==0)
// {
//      int counter=0;
//     map<int,int>::iterator it =o.begin();
//     while(it!=o.end())
//      {
//          if(it->second==1)
//           counter++;
//           if(counter>2) break;
//      it++;
//      }

//      if(counter==2) cout<<
// }




bool findd(map<int,int> o,int k,int zushu)
{
//cout<<"june "<< k<<endl;
//cout<<"the begin is  "<<k<<endl;
if(zushu==0)
  return  findTwo( o);

while(k<=9 && o[k]==0) k++;

if(k>9) return false;


bool f1 =false;
bool f2= false;
bool f3= false;
if(o[k]>=3)
{
o[k]-=3;
//cout<<"first "<<k<<" "<<k<<"  "<<k<<endl;
f1 = findd(  o,  k,zushu-1);
o[k]+=3;
}

if(o[k]-1>=0 &&o[k+1]>=1 &&o[k+2]>=1)
{
o[k]--;
o[k+1]--;
o[k+2]--;
//cout<<"second "<<k<<" "<<k+1<<"  "<<k+2<<endl;

f2= findd(  o,  k,zushu-1);
o[k]++;
o[k+1]++;
o[k+2]++;

}

f3 =findd(  o,  k+1,zushu);

return f1||f2||f3;


}


小明是一名算法工程师，同时也是一名铲屎官。某天，他突发奇想，想从猫咪的视频里挖掘一些猫咪的运动信息。为了提取运动信息，他需要从视频的每一帧提取“猫咪特征”。一个猫咪特征是一个两维的vector<x, y>。如果x_1=x_2 and y_1=y_2，那么这俩是同一个特征。
       因此，如果喵咪特征连续一致，可以认为喵咪在运动。也就是说，如果特征<a, b>在持续帧里出现，那么它将构成特征运动。比如，特征<a, b>在第2/3/4/7/8帧出现，那么该特征将形成两个特征运动2-3-4 和7-8。
现在，给定每一帧的特征，特征的数量可能不一样。小明期望能找到最长的特征运动。

输入描述:

第一行包含一个正整数N，代表测试用例的个数。

每个测试用例的第一行包含一个正整数M，代表视频的帧数。

接下来的M行，每行代表一帧。其中，第一个数字是该帧的特征个数，接下来的数字是在特征的取值；比如样例输入第三行里，2代表该帧有两个猫咪特征，<1，1>和<2，2>
所有用例的输入特征总数和<100000

N满足1≤N≤100000，M满足1≤M≤10000，一帧的特征个数满足 ≤ 10000。
特征取值均为非负整数。


输出描述:

对每一个测试用例，输出特征运动的长度作为一行


输入例子1:

1
8
2 1 1 2 2
2 1 1 1 4
2 1 1 2 2
2 2 2 1 4
0
0
1 1 1
1 1 1


输出例子1:

3


例子说明1:

特征<1,1>在连续的帧中连续出现3次，相比其他特征连续出现的次数大，所以输出3



 小明目前在做一份毕业旅行的规划。打算从北京出发，分别去若干个城市，然后再回到北京，每个城市之间均乘坐高铁，且每个城市只去一次。由于经费有限，希望能够通过合理的路线安排尽可能的省一些路
 上的花销。给定一组城市和每对城市之间的火车票的价钱，找到每个城市只访问一次并返回起点的最小车费花销。

输入描述:

城市个数n（1<n≤20，包括北京）

城市间的车票价钱 n行n列的矩阵 m[n][n]


输出描述:

最小车费花销 s


输入例子1:

4
0 2 6 5
2 0 4 4
6 4 0 2
5 4 2 0


输出例子1:

13


例子说明1:


Z国的货币系统包含面值1元、4元、16元、64元共计4种硬币，以及面值1024元的纸币。现在小Y使用1024元的纸币购买了一件价值为的商品，请问最少他会收到多少硬币？

输入描述:

一行，包含一个数N。


输出描述:

一行，包含一个数，表示最少收到的硬币数。


输入例子1:

200


输出例子1:

17


例子说明1:

花200，需要找零824块，找12个64元硬币，3个16元硬币，2个4元硬币即可。





机器人正在玩一个古老的基于DOS的游戏。游戏中有N+1座建筑——从0到N编号，从左到右排列。编号为0的建筑高度为0个单位，编号为i的建筑的高度为H(i)个单位。 

起初， 机器人在编号为0的建筑处。每一步，它跳到下一个（右边）建筑。假设机器人在第k个建筑，且它现在的能量值是E, 下一步它将跳到第个k+1建筑。
它将会得到或者失去正比于与H(k+1)与E之差的能量。如果 H(k+1) > E 那么机器人就失去 H(k+1) - E 的能量值，否则它将得到 E - H(k+1) 的能量值。

游戏目标是到达第个N建筑，在这个过程中，能量值不能为负数个单位。现在的问题是机器人以多少能量值开始游戏，才可以保证成功完成游戏？

输入描述:

第一行输入，表示一共有 N 组数据.

第二个是 N 个空格分隔的整数，H1, H2, H3, ..., Hn 代表建筑物的高度


输出描述:

输出一个单独的数表示完成游戏所需的最少单位的初始能量


输入例子1:

5
3 4 3 2 4


输出例子1:

4


输入例子2:

3
4 4 4


输出例子2:

4


输入例子3:

3
1 6 4


输出例子3:

3

