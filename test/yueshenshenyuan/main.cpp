/*
前几个月放映的头号玩家简直火得不能再火了，作为一个探索终极AI的研究人员，月神自然去看了此神剧。
由于太过兴奋，晚上月神做了一个奇怪的梦，月神梦见自己掉入了一个被施放了魔法的深渊，月神想要爬上此深渊。

已知深渊有N层台阶构成（1 <= N <= 1000)，并且每次月神仅可往上
爬2的整数次幂个台阶(1、2、4、....)，请你编程告诉月神，
月神有多少种方法爬出深渊
*/
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool isMi(int  n)
{
    int counter =0;
    while(n!=0)
    {
        if(n&1==1) counter++;
        n= n>>1;

    }
return counter==1;

}
 int fun(int n){
     unordered_set<int> flag;
vector<long long> re;
     re.resize(n+1,0);
      re[0]=1;
     re[1] =1;
     re[2]=2;
     if(n<=2) return re[n];
     flag.insert(1);
     flag.insert(2);
     for(int i=3;i<=n;i++)
     {
         bool cf = isMi(i);
        
         unordered_set<int>::iterator it =flag.begin();
         while(it!=flag.end())
            {
                // cout<<"*it"<<endl;
                re[i] +=re[i-(*it)];
                re[i] %= 1000000003LL;
                it++;
            }
             if(cf)
         {
             //cout<<"cf="<<cf<<endl;
             flag.insert(i) ;re[i]+=1;}



     }


return re[n];

}


int main(){
    int counter =0;
    cin>>counter;
    vector<int>re (counter,0);
    for(int i=0;i<counter;i++)
        {cin>>re[i];
       // cout<<fun(re[i])<<endl;
        }
        for(int i=0;i<counter;i++)
        {//cin>>re[i];
        cout<<fun(re[i])<<endl;
        }

return 0;
}

// #include<iostream>
// #include<vector>
 
// using namespace std;
 
// int main(){
 
//     vector<int> p = {1,2,4,8,16,32,64,128,256,512};
//     vector<long long> dp(1001,0);
//     dp[0] = 1;
//     for (int i = 1; i < dp.size();i++){
//         for (int j = 0; j < p.size();j++){
//             if (i >= p[j]){
//                 dp[i] = dp[i] + dp[i - p[j]];
//                 dp[i] %= 1000000003LL;
//             }
//         }
//     }
//     int T;
//     std::cin >> T;
//     for (int n; T--; std::cout << dp[std::cin >> n, n] << std::endl) {}
//     return 0;
// }