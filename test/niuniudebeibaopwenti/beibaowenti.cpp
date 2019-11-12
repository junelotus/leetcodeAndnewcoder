/*
牛牛准备参加学校组织的春游, 出发前牛牛准备往背包里装入一些零食, 牛牛的背包容量为w。
牛牛家里一共有n袋零食, 第i袋零食体积为v[i]。
牛牛想知道在总体积不超过背包容量的情况下,他一共有多少种零食放法(总体积为0也算一种放法)。
输入描述:

输入包括两行
第一行为两个正整数n和w(1 <= n <= 30, 1 <= w <= 2 * 10^9),表示零食的数量和背包的容量。
第二行n个正整数v[i](0 <= v[i] <= 10^9),表示每袋零食的体积。

输出描述:

输出一个正整数, 表示牛牛一共有多少种零食放法。

示例1
输入
复制

3 10
1 2 4


8

说明

三种零食总体积小于10,于是每种零食有放入和不放入两种情况，一共有2*2*2 = 8种情况。

*/
#include <bits/stdc++.h>
using namespace std;
long counter=0;
bool flag =true;

void dfs(vector<long> re,long begin,long m,long sum)
{
    if(sum<=m)
     { //  cout<<sum<<endl; 
        
        counter++;
    }
    else {
        flag =false;
        return ;
    }
    for(long i=begin;i<re.size();i++)
       { dfs(re,i+1,m,sum+re[i]);
       if(!flag) { flag =true;break;}
       }
}

int main()
{
long n,m;
cin>>n>>m;
vector<long>re(n,0);
long i=0;
while(i<n)
{
    cin>>re[i++];

}
std::sort(re.begin(),re.end());
long begin=0,sum=0;
dfs(  re,  begin,  m,  sum);
cout<<counter<<endl;
return 0;

}