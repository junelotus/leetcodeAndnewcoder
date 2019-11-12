#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
//char wode[] ={'1','2'};// "12345";
//cout<<strlen((wode))<<endl;
/*输出字符串长度为５*/
string nide = "iam";
string wode="i am";
cout<<(int)(wode[1])<<" "<<(int)(nide[1])<<endl;
cout<<(nide<wode)<<endl;

cout<<(nide==wode)<<endl;
cout<<(nide>wode)<<endl;
/*比较的时候包含空格的比较*/
return 0;


}

