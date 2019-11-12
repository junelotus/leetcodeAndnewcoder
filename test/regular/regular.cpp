#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool match(string s, string p)
    {
        bool flag =false;
        int i=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=p[0] &&p[0]!='*') continue;
        vector<int> t;
        
         flag = matchfun(s,p,t,i,0);
         if(flag ){
        for(int i=0;i<t.size();i++)
        cout<<t[i]<<endl;
        if(flag) cout<<"i="<<i<<endl;
        return flag;
        }
        }

    return false;
    }



    bool matchfun(string s,string p,vector<int> &t,int begina,int beginb)
    {
        //cout<<"begin="<<begina<< "  "<<beginb<<endl;
       if(begina==s.size() &&(beginb ==p.size()||p=="*"))  return true;
       else if(begina==s.size() ) return false;

        
    //    if(begina<s.size()&&p.substr(beginb,p.size()-beginb-1)=="") return false;
    //    if(p!="*" && s.size()==begina) return false;
    //    if(p[beginb]!='*' && ( p[beginb]!=s[begina])) return false;//matchfun(  s,  p, t,  begina+1,  beginb);
       
        if(s[begina]==p[beginb] )
            {
                    //cout<<"ddd="<<begina<<endl;
                    t.push_back(begina);
                    bool flag = matchfun( s ,  p ,t,begina+1,beginb+1);
                    if(!flag)
                     t.pop_back();
                    return flag;
                      

                }
                    
        else if(p[beginb]=='*')
                    return matchfun(  s,  p ,t,begina+1,beginb) ||  matchfun(  s,  p ,t,begina+1,beginb+1) ||matchfun(  s,  p ,t,begina,beginb+1) ; 
             

    }
};

int main()
{
string s ,p;
cin>>s>>p;
Solution s0;
cout<<s0.match(s,p);
return 1;


}