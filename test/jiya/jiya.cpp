#include  <bits/stdc++.h>
using namespace std;
int fun(string str,char c)
{
    int size =str.size();
    if(size<=2) return 0;
    int i=size-1;
    int t =0;
    // bool flag = false;
    int sum =0;
    while(i>=0)
    {
        if(str[i]==c)  {
            // if(!flag && t>0)
            // {
            //     flag=true;
            //     //sum+=t;
            // }
            // // else 
            // // t*=2;

            sum+=t;
             
        }
        else t++;
        // cout<<t<<"sum="<<sum<<endl;
        
        i--;
    }
    // cout<<endl;

    return sum;

}


int main()
{

string str;
cin>>str;
cout<<std::min(fun(str,'C'),fun(str,'D'));
return 0;




}


