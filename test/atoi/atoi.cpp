#include <iostream>
 using namespace std;
 int main()
 {
char a = '1';
cout<<a-'0'<<endl;
int b=a-'0';
cout<<"b="<<b<<endl;
cout<<(char)(b+'0')<<endl;
char c =(char)(b+'0');
cout<<"c="<<c<<endl;

return 0;

 }


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