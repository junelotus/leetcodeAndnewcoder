#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int sum =0;
//vector<int> re(1,n);
for(int i=0;i<n;i++)
{

char a;
cin>>a;
if(a=='L')
    sum+=90;
else 
    sum-=90;
sum%=360;    


}

if(sum==0) cout<<"N"<<endl;
else if(sum==90||sum ==-270) cout<<"W"<<endl;
else if(abs(sum)==180) cout<<"S"<<endl;
else cout<<"E"<<endl;


return 0;
}

