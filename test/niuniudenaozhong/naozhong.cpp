#include<bits/stdc++.h>
using namespace std;
bool fun(pair<int,int> a,pair<int,int>b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;

}

bool jifa(pair<int,int> a,int dru,pair<int,int> dl)
{   
    if(a.second+dru>=60)
        {   
            a.first+=(a.second+dru)/60;
            a.second = (a.second+dru)%60;
        }
        else a.second+=dru;
        // cout<<"hehe "<<a.first<<" "<<a.second<<endl;
        if(a.first<dl.first||(a.first==dl.first&&a.second<=dl.second))
         return true;
         return false;
      

}

int main()
{
    int n;
    cin>>n;
    
    vector<pair<int,int> >re(n,make_pair(0,0));
    for(int i=0;i<n;i++)
        cin>>re[i].first>>re[i].second;
    int dru=0;
    cin>>dru;
    pair<int,int> dl(0,0);
    cin>>dl.first>>dl.second;
    std::sort(re.begin(),re.end(),fun); 
    vector<pair<int,int>>::iterator it = re.end();
    it--;
    while(it>=re.begin())
    {
        
        if(jifa(  *it,  dru, dl))
{   cout<<it->first<<" "<<it->second<<endl;
    break;

}
it--;

    }   
return 0;

}