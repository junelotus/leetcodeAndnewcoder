//   int minDepth(TreeNode *root) {
//         if(!root) return 0;
//         TreeNode *first =root;
//         if(!first->left&&!first->right) return 1;
//         int minn=INT_MAX;
//         vector<TreeNode*> re(1,first);
//         first=first->left;
//         vector<int> n(1,1);
//         while(first||!re.empty())
//         {
//             while(first)
//             {
//                 re.push_back(first);
//                 n.push_back(n.back()+1);
//                 first=first->left;
                
//             }

//             first =re.back();  
//             TreeNode  * second= NULL;   

//             while(!re.empty()&&(!first->right || first->right==second))
//             {
//                 if(!first->right && !first->left)
//                 {
//                     minn =std::min(minn,n.back());

//                 }
//                 second = first;
//                 re.pop_back(); 
//                 n.pop_back();
//                 if(re.empty()) return minn;
//                 first  = re.back();
                
//             }
//             if(re.empty()) return minn;
 
//             first =first->right;
 
//         }

        
//         return minn;
        
        
//     }

int run(TreeNode *root){

if(!root) return 0;
queue<TreeNode*> re;
re.push(root);
int counter=1;
int size = re.size();
while(!re.empty())
{
    for(int i=0;i<size;i++)
    {
        TreeNode* first =re.front();
        re.pop();
        if(!first->left && !first->right)
          return counter;
        if(first->left)
          re.push(first->left);
        if(first->right)
          re.push (first->right);  

    }

    size =re.size();
    counter++;

}




return counter;

}


class Solution {
public:
    int fun(string t)
    {
        if(t=="+") return 1;
        if(t=="-") return 2;
        if(t=="*") return 3;
        if(t=="/") return 4;
        return 0;
    }

    int atoi(string s)
    {
        int begin =0;
        if(s[0]=='-'||s[0]=='+')
        begin+=1;

        reverse(s.begin()+begin,s.end());
int d =0;
while(s.size())
{
    if(s.size()==1 &&s[0]=='-') return 0-d;
    if(s.size()==1 &&s[0]=='+') return d;
    d=d*10+(s.back()-'0');
    s.pop_back();
}
return d;
    }

    string itoa(int d)
    {
        string str ="";
        bool flag =d<0?true:false;
        while(d!=0)
        {
               str=(char)(d%10+'0')+str; 
                d/=10;
        }
        if(flag) return '-'+str;

return str;
    }
    int evalRPN(vector<string> &t) {
        size_t size = t.size();
        if(size==0) return 0;
        if(size==1) return atoi(t[0]);
        if(size<3) return 0;
        vector<string> re(1,t.back());
        vector<int> n;
        t.pop_back();
        while(!re.empty())
        {
            int d = fun(t.back());
            int e = fun(t[t.size()-2]);
            while(!(d==0&&e==0))
            {
                re.push_back(t.back());
                t.pop_back();
                d = fun(t.back());
                e = fun(t[t.size()-2]);
                
            }
            while(d==0 && e==0)
            {
                d= fun(re.back());
                cout<<"d="<<d<<"  re.back()"<<re.back()<<endl;
                re.pop_back();
                int a = atoi(t.back());
                t.pop_back();
                int b = atoi(t.back());
                t.pop_back();
                cout<<"a ="<<a<<" b="<<b<<endl;
                if(d==1)
                    t.push_back(itoa(b+a));
                if(d==2)
                    t.push_back(itoa(b-a));
                if(d==3)
                    t.push_back(itoa(b*a));
                if(d==4)
                    t.push_back(itoa(b/a));
                    for(int i=0;i<t.size();i++)
                    cout<<t[i]<<"  ";
                    cout<<endl;
                if(re.empty()) return atoi(t[0]);
                 if(t.size()==1 || fun(re.back())==0 )
                    {
                        t.push_back(re.back());
                        re.pop_back();
                    }
                d = fun(t.back());
                e = fun(t[t.size()-2]); 

            }
            
        }
        
        return  atoi(t[0]);
        
    }
};

["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]


class Solution {
public:
    int maxPoints(vector<Point> &points) {
        
    }
};