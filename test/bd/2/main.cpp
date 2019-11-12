#include <iostream>
#include <vector>
using namespace std;
long long jiecheng(int n)
{
    if(n==1) return 1;
return n*jiecheng(n-1);

}


int main(){
    int n=0,d=0;
    cin>>n;cin>>d;
    int i=0;
vector<int> s;
    while(i<n)
    {
        int a =0;
        cin>>a;
        s.push_back(a);
        i++;

    }
    long long sum =0;
    int x1 = -1;
    int x2 =-1;
    int x3 = 0;
    int x4 = 0;
    // vector<int>::iterator tt =lower_bound(s.begin(),s.end(),s[x3]+d);
    // int t=(tt-s.begin());
    // cout<<t<<endl;k
    // if(s[t]>s[x3]+d)
    //  t--;
    for(  ;x4<n;x4++)
     if(s[x3]+d<s[x4])
     break;

    x4-=1;
    // x4=3;
    //cout<<"x4="<<x4<<endl;
    int jcd =jiecheng(d);
    int counter=0;
     while(x4<n  )
     {

         sum+=jiecheng(x4-x3+1)/jcd/jiecheng(x4-x3+1-d);
         sum%=99997867;
         if(x1!=-1)
         {
             int minx1 = x3;
             int minx2 = x2;
             if(x2-x3>=d)
             sum -=jiecheng(x2-x3+1)/jcd/jiecheng(x2-x3+1-d);



         }
    x1=x3;
    x2=x4;
    x3++;
    x4++;
    if(x4==n) break;

while(true)
{
    
    while(x4+1<n && s[x4+1]-s[x3]<=d)
        x4++;
   break;    

    }

 x4--;
 if(x4==n-1)
 counter++;


     }

cout<<sum<<endl;
return 0;
    
    }

