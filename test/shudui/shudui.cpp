#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    long long n=0,k=0;
    cin>>n>>k;
    if(k>=n) {cout<<0<<endl;return 0;}
    if(k==0) {cout<<(long long)(1+(n-1))*(n-1)+n<<endl;return 0;}
    long long counter=0;
    counter =(long long)(1+(n-k))*(n-k) /2 ;
    // cout<<counter;
    // long long  d =k;
    // if(k==0) d=-1;
    
    for(long long  i=k+1;i<=n;i++)
    {
         long long d = n/i;
         //long long t = n%i;
         //if(k==-1) k=0;

        if(d*i+k>n)counter+=(d-1)*(i-k);
        else if(d*i+k==n) counter+=(d-1)*(i-k)+1;
        else{ 
            counter+=(d-1)*(i-k);
         
         counter+=std::min(i-k,n+1-i*d-k);

        }
        //         else 
        //          counter+=d;
        //  for(long long j=k;j<i;j++)
        //    {
               
        //         if(d*i+j>n)counter+=d-1;
        //         else 
        //          counter+=d;
        //    }
        //  if(counter>INT_MAX)
        //   counter%=mod;

    }

     cout<<counter<<endl;
     return 0;

    

}