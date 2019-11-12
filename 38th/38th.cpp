#include <vector>

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Solution {
public:
  //  vector<string> re={"0","1","11","21","1211","111221"."312211","13112221","1113213211","31131211131221","13211311123113112211","11131221133112132113212221"};

void fun(vector<string> &re,int n)
{
re.reserve(30);
re.push_back("1");

for(int i=0;i<n-1;i++)
{
string str ;
string first = re.back();
int size = first.size();
int j=0;
int begin  =0;
//cout<<"size ="<<size<<endl;
while(j<size)
{
while(j<size && first[j] == first[begin])
 j++;

//if(j==size)
// j--;
string sub;
//cout<<to_string(j-begin)<<endl;
//cout<<str[begin]<<endl;
str+=to_string(j-begin)+(first[begin]);
 begin =j;
j = begin;

}

//cout<<"this str"<<str<<endl;
re.push_back(str);

}
return  ;
}

    string countAndSay(int n) {
vector<string> re;
fun(re,n);
   
	 return re[n-1];
    }
};


int main()
{
Solution so;
cout<<so.countAndSay(30)<<endl;
//so.countAndSay(9);

return 0;}
