/*
为了找到自己满意的工作，牛牛收集了每种工作的难度和报酬。牛牛选工作的标准是在难度不超过自身能力值的情况下，牛牛选择报酬最高的工作。在牛牛选定了自己的工作后，牛牛
的小伙伴们来找牛牛帮忙选工作，牛牛依然使用自己的标准来帮助小伙伴们。牛牛的小伙伴太多了，于是他只好把这个任务交给了你。
输入描述:

每个输入包含一个测试用例。
每个测试用例的第一行包含两个正整数，分别表示工作的数量N(N<=100000)和小伙伴的数量M(M<=100000)。
接下来的N行每行包含两个正整数，分别表示该项工作的难度Di(Di<=1000000000)和报酬Pi(Pi<=1000000000)。
接下来的一行包含M个正整数，分别表示M个小伙伴的能力值Ai(Ai<=1000000000)。
保证不存在两项工作的报酬相同。

输出描述:

对于每个小伙伴，在单独的一行输出一个正整数表示他能得到的最高报酬。一个工作可以被多个人选择。

示例1
输入
复制

3 3 
1 100 
10 1000 
1000000000 1001 
9 10 1000000000

输出
复制

100 
1000 
1001

*/
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
// bool fun(pair<int,int> a,pair<int>b)
// {

// if(a.first<b.first) return true;
// if(a.first==b.first &&a.second>b.second) return true;
// return false;
// } 

int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int> re;
    vector<int> di(n,0);
    vector<int> pi(n,0);
    int maxx = INT_MIN;
     
    // vector<pair<int,int>> cu(n,make_pair(0,0));
    vector<int> st(m,0);


    for(int i=0;i<n;i++)
    {
       
        int a ,b;
        cin>>a>>b;
        di[i] = a;
        //if(maxx<b)
        // maxx=b;
        //pi[i] = b;
        if(re[a]<b)
            re[a]=b;
    }
    std::sort(di.begin(),di.end());
    //std::sort(pi.begin(),pi.end());
    for(int i=0;i<m;i++)
    {
        int a ;
        cin>>a;
        st[i] =a;


    }

    map<int,int>::iterator it = re.begin();
     map<int,int>::iterator itt =re.begin();
    it++;
    while(it!=re.end())
    {

       if(it->second<itt->second)
        re[it->first] =itt->second;
       itt++;
        it++;


    }
    for(int i=0;i<m;i++)
    {
        int d =  (lower_bound(di.begin(),di.end(), st[i])-di.begin());
        if(d>=n) cout<<re[di[d-1]]<<endl;
        else if(di[d]>st[i]){
            if(d==0) cout<<0<<endl;
            else cout<<re[di[d-1]]<<endl;
        } 
        else cout<<re[di[d]]<<endl; 

    }

return 0;
}

