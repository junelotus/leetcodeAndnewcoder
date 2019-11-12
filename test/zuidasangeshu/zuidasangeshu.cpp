#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    //vector<int> re(n,0);
    long long  max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    long long min1=INT_MAX,min2=INT_MAX,min3=INT_MAX;
    long long a;
    for(int i=0;i<n;i++)
    { 
        cin>>a;
        if(a>max1)
        {
            max3=max2;
            max2=max1;
            max1=a;
            
        }
        else if(a>max2)
        {
            max3=max2;
            // max2=max1;
            max2=a; 
        }
        else if(a>max3)
            max3=a;

        if(a<min1)
        {
            min3=min2;
            min2=min1;
            min1=a;
            
        }
        else if(a<min2)
        {
            min3=min2;
            min2=a;
            

        }
        else if(a<min3)
            min3 = a;
    
    }
    // cout<<max1<<" "<<max2<<" "<<max3<<endl;
    // cout<<min1<<" "<<min2<<" "<<min3<<endl;
    // long long d = max3*max2%;
    if(min2>0)
        cout<<max3*max2*max1<<endl;
    else cout<<std::max(max3*max2*max1,max1*min1*min2)<<endl;
    return 0;
    
    
    
    
    
}







/* 

61
3472 -7098 -9281 7789 7955 6101 5051 7778 3090 7423 -7151 5652 1595 -8094 677 -8324 8347 -2482 9313 -9338 -3157 8559 6945 3618 3087 121 -8468 3225 1356 6939 2799 -7231 -6309 -5453 633 -8689 -4776 2714 -2743 -1409 5918 -3333 1803 8330 -2206 -6117 -4486 -7903 -4375 -3739 2897 8056 -5864 -522 7451 -4541 -2813 5790 -532 -6517 925

*/





