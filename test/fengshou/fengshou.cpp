/*又到了丰收的季节，恰逢小易去牛牛的果园里游玩。
牛牛常说他对整个果园的每个地方都了如指掌，小易不太相信，所以他想考考牛牛。
在果园里有N堆苹果，每堆苹果的数量为ai，小易希望知道从左往右数第x个苹果是属于哪一堆的。
牛牛觉得这个问题太简单，所以希望你来替他回答。
输入描述:

第一行一个数n(1 <= n <= 105)。
第二行n个数ai(1 <= ai <= 1000)，表示从左往右数第i堆有多少苹果
第三行一个数m(1 <= m <= 105)，表示有m次询问。
第四行m个数qi，表示小易希望知道第qi个苹果属于哪一堆。*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,m;
    cin>>n;
    vector<int> re(n);
    for(int i=0;i<n;i++)
    {
        cin>>re[i];
        if(i>0)
            re[i]+=re[i-1];

            

    }
    // for(int i=0;i<n;i++)
    // cout<<re[i]<<"   ";
    // cout<<endl;
cin>>t;
for(int i=0;i<t;i++)
{

    cin>>m;
    if(m>re[n-1]) {cout<<-1<<endl;continue;}
    cout<<(lower_bound(re.begin(),re.end(),m)-re.begin())+1<<endl;
    


}

return 0;



}
