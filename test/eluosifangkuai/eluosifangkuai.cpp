#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int counter =0 ;
int re = 0;
vector<int> s(1+n,0);
// unordered_set<int> s;
for(int i=0;i<m;i++)
{
    int a ;
    cin>>a;
    s[a]++;
    if(s[a]==1)
       {
           counter++;
        //    cout<<
           if(counter==n)
            {
                re+=1;
                for(int t=1;t<=n;t++)
                  {  s[t]-=1;
                     if(s[t]==0) 
                        counter--;
                  }
            }
           
           
         
       
       }
    //    s[a]++;
}
cout<<re<<endl;
return 0;

}