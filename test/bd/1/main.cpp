
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
