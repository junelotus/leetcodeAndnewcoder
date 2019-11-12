#include <iostream>
#include <vector>
using namespace std;



int main()
{
    long long counter=0;
    cin>>counter;
    if(counter==0) {cout<<0<<endl;return 0;}
    
    vector<long long> s;
    long long k=1;
    for(long long i=0;i<counter;i++)
    {
    long long t=0;
    cin>>t;
    s.push_back(t);
    k*=2;

    }
    if(counter==1){cout<<s[0]/2+1<<endl;return 0;}

    int re =0;

    for(long long i=0;i<counter;i++)
    {
        long long sum =(long long)s[i];
        if(i>0){
        int j=i-1;
        do{
            //if(j==i-1)
                sum=(long long)sum/2.0;
            // else 
            //     sum+=(long long)sum/2.0;
            sum+=(long long)s[j];
            j--;
         
          
         }while(j>=0);  
        }
         long d =sum/2+1;
         cout<<"d=" <<d<<endl;
        if(re<d) re=d;
        


    }
    cout<<re<<endl;
    return 0;


}