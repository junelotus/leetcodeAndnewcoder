#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


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
            //   cout<<d%10<<endl;
               str=(char)(abs(d%10)+'0')+str; 
                d/=10;
                // cout<<str<<endl;
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
                //cout<<"d="<<d<<"  re.back()"<<re.back()<<endl;
                re.pop_back();
                int a = atoi(t.back());
                t.pop_back();
                int b = atoi(t.back());
                t.pop_back();
               //cout<<"a ="<<a<<" b="<<b<<endl;
                if(d==1)
                    t.push_back(itoa(b+a));
                if(d==2)
                    t.push_back(itoa(b-a));
                if(d==3)
                    t.push_back(itoa(b*a));
                if(d==4)
                    t.push_back(itoa(b/a));
                    // for(int i=0;i<t.size();i++)
                    // cout<<t[i]<<"  ";
                    // cout<<endl;
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


int main()
{
    vector<string> s{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

    Solution so;
    so.evalRPN(s);
    return 0;



}