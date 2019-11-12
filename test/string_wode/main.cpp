
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int find(string re)
    {
        int d =re.size();
         if(d>=3 && re[d-1]==re[d-2] &&re[d-3]==re[d-2]  &&re[d-3]=='.') return -1; 

        if(d>=2)
         if(re[d-1]==re[d-2] &&re[d-1]=='.') return 2;
        if(d>=1) if(re[d-1]=='.') return 1;
       
        return 0;
    }
    string simplifyPath(string path) {

    size_t size= path.size();

    if(size==0  ) return '/'+path;
   // if(size==1) return path;
     
    size_t  i=0;
    string re="/";

    while(i<size)
    {
        if(path[i]!='/')
            re+=path[i];
        else{
            
            int d =find(re);
            if(d==-1) return "/";
            if(d==1)
                re.resize(re.size()-1);
            if(d==2)
            {
                int t=re.size()-1;
                int counter=0;
                while(t>=0&&counter<2)
                {
                    if(re[t]=='/') counter++;
                    t--;
                }
                if(t==-1&&counter<2) return "/";
                re.resize(t+1);

            }
           
if(re.empty()||re.back()!='/') re+='/'; 
        }
             
        i++;    


//cout<<"guocheng "<<re<<endl;

    }
    if(re.size()>1&&re.back()=='/') re.resize(re.size()-1);

return re;
    }
};



int main()
{
    vector<int> re(5,0);
    for(int i=0;i<5;i++)
    re[i]=i;

    vector<int>::iterator it=re.begin();
    re.insert(it+3,10);
    re[0]=100;
    for(int i=0;i<re.size();i++)
    cout<<re[i]<<" ";
    cout<<endl;
    it=re.begin();
    vector<int>::iterator it1=++it;
    it1=++it;
    it1=++it;
    it1=++it;
    it=re.begin();
    cout<<*it<<endl;
    cout<<*it1<<endl;
    re.erase(it);
     //re.erase(++it);
    /*
    erase(const_iterator __position)
      { return _M_erase(begin() + (__position - cbegin())); }


    _M_erase(iterator __position)
    {
      if (__position + 1 != end())
	_GLIBCXX_MOVE3(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      _Alloc_traits::destroy(this->_M_impl, this->_M_impl._M_finish);
      return __position;
    }

    之前的迭代器保存的是和当前begin间的距离
*/
//it1 =it++;

     // *it =9;

    cout<<*it<<endl;
    cout<<*(++it)<<endl;
    cout<<*it1<<endl;
{
    map<int,int> re;

    map<int,int>::iterator it = re.begin();
    it = re.insert(it ,make_pair(2,3));
    //cout<<it->first<<" "<<it->second<<endl;
    it = re.insert(it ,make_pair(1,2));
    it = re.insert(it ,make_pair(0,2));


    it = re.begin();
    it =re.erase(it++);
    cout<<it->first<<" "<<it->second<<endl;
    //   while(it!=re.end()){
    // cout<<it->first<<" "<<it->second<<endl;
    // it++;
    // }
    //it->second = 4;
    //cout<<it->first<<" "<<it->second<<endl;

}
// string str;
// cin>>str;
// Solution s;
// cout<<s.simplifyPath(str)<<endl;
return 0;


}


class Solution {
public:
    string minWindow(string s, string t) 
    {
         size_t size= s.size();
         
         size_t size_lie = t.size();
         if(size==0||size_lie ==0) return "";
         int counter =0;
         unordered_map<char,int> re;
         for(char a ='a';a<='z';a++)
            re[a]==-1;
         for(size_t i=0;i<size_lie;i++)
            re[t[i]] =0;
        size_t i=0;
        int min=INT_MAX;
        size_t begin  = i;
        size_t ree=begin;

        while(i<size)
        {
            if(re[s[i]]==0)
            {
                counter++;
            }
            if(re[s[i]]!=-1)
                re[s[i]]++;
    

            if(counter==size_lie)
            {
                if(i-begin+1<min) {min = i-begin+1;ree=begin;}
                while(begin<i)
                {
                    if(re[s[begin]]==-1 ) {
                        begin++;
                        if(i-begin+1<min) 
                           {min = i-begin+1;ree=begin;}
                    }
                    else  {
                        begin++;
                        re[s[begin]]--;
                        if(re[s[begin]]==0)
                        {counter--;
                            break;}
                         if(i-begin+1<min) 
                           {min = i-begin+1;ree=begin;}   
                    }
                    begin++;

                }



            }


            i++;
        }    


        return s.substr(ree,min);
    }
};