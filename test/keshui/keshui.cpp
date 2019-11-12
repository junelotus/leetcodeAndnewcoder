#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> chushi(n,0);
    vector<int> sumweak(n,0);
    vector<int> sum(n,0);
    // int wode=0;
    // vector<int> 
    for(int i=0;i<n;i++)
    {
        cin>>chushi[i];
        if(i==0)
        sum[i]=chushi[i];
        else
        sum[i]=sum[i-1]+chushi[i];

    }
     if(k>=n) {cout<<sum[n-1]<<endl;return 0;}
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i==0)
            sumweak[i]= (a==1?sum[0]:0);
            else{
         
        if(a==1)
            sumweak[i]=sumweak[i-1]+chushi[i];
        else 
            sumweak[i]=sumweak[i-1];
            }
            // cout<<sumweak[i]<<" ";

    }
   
    // cout<<endl;
    int t = 0;
    int end =std::min(n-1,k-1);
    int d=sumweak[end]-sumweak[0];
    
    if(sumweak[0]==0)
        t=std::max(t,sum[end]-sum[0]-d);
    for(int i=1;i<n;i++)


{
    end =std::min(n-1,i+k-1);
   
    if(sumweak[i]==sumweak[i-1])
    {
         
         d =sumweak[end]-sumweak[i-1];
        //  cout<<end<<"  "<<i<<" "<<d<<"  "<<sum[end]-sum[i-1]<<endl;
         t=std::max(t,sum[end]-sum[i-1]-d);
         
    }


}

// cout<<t<<endl;
     
cout<<(t+sumweak[n-1] )<<endl;
return 0;




}
