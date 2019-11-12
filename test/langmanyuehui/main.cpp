#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> re(2*n,0);
    for(int i=0;i<n;i++)
    {
        cin>>re[2*i]>>re[2*i+1];

    }

    unordered_map<int,int> cu;
    int  t=1;
    for(int i=0;i<2*n;i++)
    {
        if(cu.find(re[i])==cu.end())
           { cu[re[i]] =t;
             re[i] = t++;
           }
        else 
            re[i] =cu[re[i]];

    }
    int counter = 0;
    for(int i=1;i<2*n;i++)
        for(int j=0;j<i;j++)
        {
            if(re[i]<re[j]) counter++;

        }
        cout<<counter<<endl;
        return 0;

}

/*

小易为了向他的父母表现他已经长大独立了,
他决定搬出去自己居住一段时间。
一个人生活增加了许多花费: 
小易每天必须吃一个水果并且需要每天支付x元的房屋租金。
当前小易手中已经有f个水果和d元钱,
小易也能去商店购买一些水果,商店每个水果售卖p元。
小易为了表现他独立生活的能力,
希望能独立生活的时间越长越好,
小易希望你来帮他计算一下他最多能独立生活多少天。*/

/*给定一个无序数组，
包含正数、负数和0，要求从中找出3个数的乘积，
使得乘积最大，要求时间复杂度：O(n)，空间复杂度：O(1)*/

