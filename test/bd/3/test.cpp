#include <iostream>
#include <map>
using namespace std;

bool findd(map<int,int> o,int k,int zushu);
bool fun(map<int,int> o,int t,int zushu)
{
    if(++o[t]>4) return false;

int a= 4;
int k =o.begin()->first;
//cout<<"k="<<k<<endl;
return findd(o,k,a);





}


bool findTwo(map<int,int> o)
{
     int counter=0;
int b=-1;
    map<int,int>::iterator it =o.begin();
    while(it!=o.end())
     {
         if(it->second==2)
         { counter++;
}
          if(counter>1) return false;
     it++;
     }

     if(counter==1) return true;
     return false;
}

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
//cout<<"flag "<<f1<<"  "<<f2<<" "<<f3<<endl;
return f1||f2||f3;


}

int main()
{
    int i=0;
    bool flag =true;
    //while(true)
    {
int i=0;
        map<int,int> o;

    while(i<13)
    {
int t =0;
cin>>t;
        
        o[t]++;
i++;
    }

     for(int i=1;i<10;i++)
      {//cout<<"***************************************"<<i<<"**************************************"<<endl;
          if(fun(  o,  i,  3))
          {
               
                 cout<<i<<" ";
                 flag =false;
          }
      }


    if(flag )  cout<<0<<endl;
    flag =true;
    }

return 0;

}

