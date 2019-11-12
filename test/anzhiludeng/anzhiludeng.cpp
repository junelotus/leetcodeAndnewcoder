/*

小Q正在给一条长度为n的道路设计路灯安置方案。

为了让问题更简单,小Q把道路视为n个方格,需要照亮的地方用'.'表示, 不需要照亮的障碍物格子用'X'表示。

小Q现在要在道路上设置一些路灯, 对于安置在pos位置的路灯, 这盏路灯可以照亮pos - 1, pos, pos + 1这三个位置。

小Q希望能安置尽量少的路灯照亮所有'.'区域, 希望你能帮他计算一下最少需要多少盏路灯。
输入描述:

输入的第一行包含一个正整数t(1 <= t <= 1000), 表示测试用例数
接下来每两行一个测试数据, 第一行一个正整数n(1 <= n <= 1000),表示道路的长度。
第二行一个字符串s表示道路的构造,只包含'.'和'X'。

输出描述:

对于每个测试用例, 输出一个正整数表示最少需要多少盏路灯。
...XX....XX
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

 int fun(string s ){
    size_t size =s.size();
    size_t i=0;
    int counter=0;
    int re=0;
    while(i<size)
    {
      if(s[i]=='X')
      {
        //   cout<<"counter="<<counter<<endl;
          int a = counter/3;
          int b =counter%3;
          if(b==1 &&i+1<size&&s[i+1]=='.')
           counter+=1;
           else
           {
               re+=a+(b>0?1:0);
                counter=0;
           }
      }
      else counter++;
    i++;
    }
    re+=counter/3+(counter%3>0?1:0);
    return re;




}

int main()
{
  int counter=0;
  cin>>counter;
  vector<string> str(counter,"");
  for(int i=0;i<counter;i++)
  {
    int a =0;
    cin>>a;
    string s(a,' ');
    cin>>s;
    str[i]=s;

  }
  for(int i=0;i<counter;i++)
  {
    cout<<fun(str[i])<<endl;
  }
return 0;


}
