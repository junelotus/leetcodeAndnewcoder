/* 小Q得到一个神奇的数列: 1, 12, 123,...12345678910,1234567891011...。

并且小Q对于能否被3整除这个性质很感兴趣。

小Q现在希望你能帮他计算一下从数列的第l个到第r个(包含端点)有多少个数可以被3整除。 */

#include <bits/stdc++.h>
using namespace std;


int  fun(int n)
{
    int sum = n;
    int t=0;
    while(sum>10)
    {
    while(sum>10)
    {
        //cout<<"sum="<<sum<<endl;
        t+=sum%10;
        sum/=10;

    }

  sum =t+sum;
  t=0;
  }
return sum;

}

int main()
{
    int n=0,m=0;
    cin>>n>>m;
    long long sum = 0;
    int counter=0;
      if(n>=m){return 0;}//cout<<endl;
    // if(n==m) 
    // {
    //     cout<<((n%3==0)?1:0)<<endl;
    //     return 0;
    // }

    for(int i=1;i<n;i++)
    {
        sum+=i;
        if(sum%3==0) sum=0;
         

    }

    for(int i=n;i<=m;i++)
    {
        if((i+1)*(i )/2 %3==0) counter++;
        // sum+=i;
        // if(sum%3==0) {counter++;sum =0;}
        


    }
//     int d = 0;
//     int counter = 0;//((n%3==0)?1:0);
// for(int i=1;i<n;i++)
// {
//     int t =  fun(i);
//     //    cout<<t<<endl;
//      d=t+d;
//      d=fun(d);

// }

//     for(int i=n; i<=m; i++)
//     {
//         // for(int k=n;k<=i;k++)
//         {
//        int t =  fun(i);
//     //    cout<<t<<endl;
        
//         d=t+d;
//         // cout<<" d= "<<d<<endl;
      
//        counter += ((d%3==0)?1:0);
//        d   = fun(d);
//         }

//     }
    cout<<counter<<endl;
    return 0;




}

