#include <iostream>
#include <vector>
using namespace std;


void fun(vector<vector<int>> s,int wode,int begin,int &sum,int current,int counter,vector<char> f)
{

if(counter==s.size())
{
//if(current<sum) sum=current;
}

else {if(f[begin]=='O')
{

f[begin]='I';

current+=wode;

for(int i=0;i<s[begin].size();i++)
{
if(i==begin) continue;

fun(s,s[begin][i],i, sum,current, counter+1, f);


}
if(counter==s.size()-1)
{
if(current+s[begin][0]<sum)
	sum = current+s[begin][0];
}

f[begin]='O';
current-=wode;

}

}

}


int main()
{
int  counter =0;
cin>>counter;
{
vector<char> f(counter,'O');
vector<vector<int>> s;
int begin =0;
int sum =0;
for(int  i=0;i<counter;i++)
 {
vector<int> subs;
for(int j=0;j<counter;j++)
{
int a = 0;
cin>>a;
sum+=a;
subs.push_back(a);

}

s.push_back(subs);
}

fun(s,0,0,sum,0,0,f);
cout<<sum<<endl;

}
return 0;

}