#include <iostream>
#include <vector>
using namespace std;
int main()
{
//while(true)
int a;
cin>>a;
if(a%1024==0) {cout<<0<<endl; return 0;}
int t= 1024-(a%1024);
int re =0;
vector<int> yb(4,1);
yb[1]=4;
yb[2]=16;
yb[3]=64;
int i=3;
while(t>0)
{
re+=t/yb[i];
t%=yb[i--];

}

cout<<re<<endl;
return 0;

}
