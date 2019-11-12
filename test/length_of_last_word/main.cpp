#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(const char *s) {
    {
       // int i=0;
        int space =0;
        if(s==NULL) return 0;
        // while(s[i]!='\0') 
        // {
        //     if(s[i]==' ')
        //      space++;
        //     i++;
        //     }
        // cout<<"i="<<i<<endl;
        // cout<<"spcae="<<space<<endl;
        // if(space==0) return i-1;
        int i =strlen(s);
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

class Solution {
public:
    int lengthOfLastWord(string s) {
        int d = s.length()-1;
         while(d>=0&&s[d]==' ') d--;

        int counter=0;
        while(d>=0&&s[d]!=' ')
           {
                counter++;
                d--;
           }
            return counter;
        
    }
};

int main(){
char * s="hello worl";
//cin>>s;
Solution so;
cout<<so.lengthOfLastWord(s);
return 0;
}