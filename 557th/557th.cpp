class Solution {
public:
    string reverseWords(string s) {

    int size = s.size();
   // for(int i=0;i<size;i++)
   int i=0;
   int begin =0 ,end =0;
   string wode = "abcd";

   reverse(wode.begin(),wode.begin()+3);
   cout<<wode<<endl;
  
  /*while(end<size)
    {
     while(begin<size && s[begin]==' ') begin++;   
     end =  begin;     
     
      while(end<size() && s[end] !=' ')
      end++;

     reserve(s.begin()+begin,s.begin()+end);

     begin = end+1;
     

   
    }*/	
   return s;
        
    }
};
