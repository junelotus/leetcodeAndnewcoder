
#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <limits.h>
 using namespace std;
class Solution {
public:
    string minWindow(string s, string t) 
    {
         size_t size= s.size();
         
         size_t size_lie = t.size();
         if(size==0||size_lie ==0) return "";
         if(size<size_lie) return "";
         int counter =0;
         unordered_map<char,int> re;
         unordered_map<char,int> re_second;
         for(char a ='A';a<='Z';a++)
            re[a]=-1;
         for(char a ='a';a<='z';a++)
            re[a]=-1;
         for(size_t i=0;i<size_lie;i++)
            re[t[i]] =0;
         for(size_t i=0;i<size_lie;i++)
            re_second[t[i]]++;
         size_lie =re_second.size();
        size_t i=0;
        int min= INT_MAX;
        size_t begin  = i;
        size_t ree=begin;

        while(i<size)
        {
            
            if(re[s[i]]!=-1)
                {
                    re[s[i]]++;
                    //cout<<"wode"<<endl;
                    }
            if(re[s[i]]==re_second[s[i]])
            {
                //cout<<"nide"<<endl;
                counter++;
            }
    

            if(counter==size_lie)
            {
                if(i-begin+1<min) {
                     //cout<<s.substr(begin,i-begin+1)<<endl;
                    min = i-begin+1;ree=begin;}
                while(begin<i)
                {
                    if(re[s[begin]]==-1 ) {
                        begin++;
                        if(i-begin+1<min) {
                             //cout<<s.substr(begin,i-begin+1)<<endl;
                            min = i-begin+1;ree=begin;}
                    }
                    else  {
                        
                        re[s[begin]]--;
                        if(re[s[begin]]<re_second[s[begin]])
                        {
                            begin++;
                            counter--;
                            break;
                        }
                        begin++;
                        if(i-begin+1<min) {
                              //cout<<s.substr(begin,i-begin+1)<<endl;
                            min = i-begin+1;ree=begin;}  
                    }
                    //begin++;

                }



            }


            i++;
        }    

        if(min==INT_MAX) return "";
        return s.substr(ree,min);
    }
};



int main()
{
Solution S;
cout<<S.minWindow("aa","b")<<endl;
return 0;


}