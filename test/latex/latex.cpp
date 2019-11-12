#include <bits/stdc++.h>
using namespace std;

int main(){

int n,p,h,w;
cin>>n>>p>>h>>w;
vector<int> re(n,0);
for(int i=0;i<n;i++)
{
    cin>>re[i];


}

int d =std::min(w,h);
while(d>=1)
{
    int k = w/d;
    int hang =0;
    for(int i=0;i<n;i++)
    {
        hang+=re[i]/k;
        hang+=(re[i]%k==0?0:1);

    }

    k=h/d;
    if(hang/k+(hang%k==0?0:1)<=p) {cout<<d<<endl;return 0;}
    d--;

}


return 0;
}